#define trigPin 10
#define echoPin 9
#define buzzer 3  // Buzzer connected to pin 3
#define redLED1 11  
#define redLED2 12   
#define yellowLED1 13 
#define yellowLED2 2 
#define greenLED1 8   
#define greenLED2 4  


void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(redLED1, OUTPUT);
  pinMode(redLED2, OUTPUT);
  pinMode(yellowLED1, OUTPUT);
  pinMode(yellowLED2, OUTPUT);
  pinMode(greenLED1, OUTPUT);
  pinMode(greenLED2, OUTPUT);
}

void loop() {
  long duration, distance;
  
  // Send a pulse to trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo response
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; // Convert to cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Buzzer logic for 3 different intensity levels
  if (distance > 0 && distance <= 20) {
    tone(buzzer, 1800);  // High frequency for close objects
    delay(100);
    noTone(buzzer);
  } 
  else if (distance > 20 && distance <= 40) {
    tone(buzzer, 1200);   // Medium frequency for mid-range objects
    delay(200);
    noTone(buzzer);
  }
  else if (distance > 40 && distance <= 60) {
    tone(buzzer, 500);   // Low frequency for far objects
    delay(300);
    noTone(buzzer);
  }
  else {
    noTone(buzzer);      // Turn off buzzer if object is out of range
  }
  // LED Logic: Blink if object is closer than 10 cm
   // LED Blinking Logic
  if (distance > 0 && distance <= 20) { 
    digitalWrite(redLED1, HIGH);
    digitalWrite(redLED2, HIGH);
    delay(100);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);
    delay(100);
  } 
  else if (distance > 20 && distance <= 40) {
    digitalWrite(yellowLED1, HIGH);
    digitalWrite(yellowLED2, HIGH);
    delay(200);
    digitalWrite(yellowLED1, LOW);
    digitalWrite(yellowLED2, LOW);
    delay(200);
  } 
  else if (distance > 40 && distance <= 60) {
    digitalWrite(greenLED1, HIGH);
    digitalWrite(greenLED2, HIGH);
    delay(300);
    digitalWrite(greenLED1, LOW);
    digitalWrite(greenLED2, LOW);
    delay(300);
  } 
  else {
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);
    digitalWrite(yellowLED1, LOW);
    digitalWrite(yellowLED2, LOW);
    digitalWrite(greenLED1, LOW);
    digitalWrite(greenLED2, LOW);
  }

  delay(300); // Small delay before next reading
}
