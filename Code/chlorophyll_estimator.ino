
#include <LiquidCrystal.h>

// Initialize LCD: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define component pins
const int RED_LED = 8;
const int IR_LED = 9;
const int SENSOR = A0;

// Variables for sensor readings
int redValue = 0;
int irValue = 0;

// Function to read sensor 10 times
// and calculate the average value
int readSensor() {
  long total = 0;

  for (int i = 0; i < 10; i++) {
    total += analogRead(SENSOR);
    delay(20);
  }

  return total / 10;
}

// Initial setup
void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(IR_LED, OUTPUT);

  Serial.begin(9600);

  lcd.begin(16, 2);

  // Display project title
  lcd.print("Optical");
  lcd.setCursor(0, 1);
  lcd.print("Chlorophyll");
  delay(2000);
  lcd.clear();

  Serial.println("Optical Chlorophyll Estimator");
  Serial.println("System initialized");
}

// Main program
void loop() {

  // Turn on red LED and read sensor
  digitalWrite(RED_LED, HIGH);
  delay(200);

  redValue = readSensor();

  digitalWrite(RED_LED, LOW);
  delay(100);

  // Turn on second LED and read sensor
  digitalWrite(IR_LED, HIGH);
  delay(200);

  irValue = readSensor();

  digitalWrite(IR_LED, LOW);

  // Calculate optical ratio
  float ratio = (float)irValue / (redValue + 1);

  // Display readings on LCD
  lcd.setCursor(0, 0);
  lcd.print("L1:");
  lcd.print(redValue);
  lcd.print(" L2:");
  lcd.print(irValue);
  lcd.print(" ");

  lcd.setCursor(0, 1);
  lcd.print("Ratio: ");
  lcd.print(ratio, 2);
  lcd.print("       ");

  // Display readings in Serial Monitor
  Serial.println("--------------------");
  Serial.print("Red reading: ");
  Serial.println(redValue);

  Serial.print("Second LED reading: ");
  Serial.println(irValue);

  Serial.print("Optical ratio: ");
  Serial.println(ratio, 3);

  delay(1000);
}


  
