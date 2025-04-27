const int blinkPin = 10;     
const int motorPin =  7;      
const int buzzerPin =  13;

void setup() {
  pinMode(motorPin, OUTPUT);  // Motor control pin
  pinMode(buzzerPin, OUTPUT); // Buzzer control pin
  pinMode(blinkPin, INPUT);   // Eye blink sensor pin
  digitalWrite(motorPin, LOW);  // Ensure the motor is off initially
  digitalWrite(buzzerPin, LOW); // Ensure the buzzer is off initially
}

void loop() {
  if (!digitalRead(blinkPin)) {  // Eye closed (sensor output is LOW)
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    digitalWrite(motorPin, LOW);   // Turn off the motor
  } else {  // Eye open (sensor output is HIGH)
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
    digitalWrite(motorPin, HIGH);  // Turn on the motor
  }
}




