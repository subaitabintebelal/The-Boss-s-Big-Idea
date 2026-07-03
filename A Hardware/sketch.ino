// Room 1 test sketch — cycles each device ON for 2s, then OFF, one at a time
// Confirms both relay onboard LED and device LED respond correctly per channel

const int LIGHT1 = 4;
const int LIGHT2 = 5;
const int LIGHT3 = 18;
const int FAN1   = 19;
const int FAN2   = 21;

const int devicePins[5] = {LIGHT1, LIGHT2, LIGHT3, FAN1, FAN2};
const char* deviceNames[5] = {"Light 1", "Light 2", "Light 3", "Fan 1", "Fan 2"};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 5; i++) {
    pinMode(devicePins[i], OUTPUT);
    digitalWrite(devicePins[i], LOW); // start all OFF
  }
  delay(500);
  Serial.println("Room 1 relay test starting...");
}

void loop() {
  for (int i = 0; i < 5; i++) {
    Serial.print(deviceNames[i]);
    Serial.println(" -> ON");
    digitalWrite(devicePins[i], HIGH);
    delay(2000);

    Serial.print(deviceNames[i]);
    Serial.println(" -> OFF");
    digitalWrite(devicePins[i], LOW);
    delay(1000);
  }
  Serial.println("All devices ON together (5s)...");
  for (int i = 0; i < 5; i++) digitalWrite(devicePins[i], HIGH);
  delay(5000);
  for (int i = 0; i < 5; i++) digitalWrite(devicePins[i], LOW);
  delay(2000);
}

