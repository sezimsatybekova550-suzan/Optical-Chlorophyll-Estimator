
/*
  Project: Optical Chlorophyll Estimator
  Controller: Arduino Uno R3

  Purpose:
  Read optical sensor values under red and
  infrared LED illumination.

  Note: The optical ratio is experimental and
  requires calibration before chlorophyll estimation.
*/

// Pin configuration
const int RED_LED_PIN = 8;
const int IR_LED_PIN = 9;
const int SENSOR_PIN = A0;

// Store sensor readings
int redValue = 0;
int irValue = 0;

// Read sensor several times for a more stable result
int readSensor() {
  long total = 0;

  for (int i = 0; i < 10; i++) {
    total += analogRead(SENSOR_PIN);
    delay(20);
  }

  return total / 10;
}

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(IR_LED_PIN, OUTPUT);

  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(IR_LED_PIN, LOW);

  Serial.begin(9600);

  Serial.println("Optical Chlorophyll Estimator");
  Serial.println("-----------------------------");
}

void loop() {
  // Measure light under red LED
  digitalWrite(RED_LED_PIN, HIGH);
  delay(200);

  redValue = readSensor();

  digitalWrite(RED_LED_PIN, LOW);

  // Measure light under infrared LED
  digitalWrite(IR_LED_PIN, HIGH);
  delay(200);

  irValue = readSensor();

  digitalWrite(IR_LED_PIN, LOW);

  // Calculate preliminary optical ratio
  float opticalRatio =
      (float)irValue / (redValue + 1);

  // Display measurements
  Serial.println("-----------------------------");

  Serial.print("Red reading: ");
  Serial.println(redValue);

  Serial.print("IR reading: ");
  Serial.println(irValue);

  Serial.print("Optical ratio: ");
  Serial.println(opticalRatio, 3);

  delay(1000);
}
