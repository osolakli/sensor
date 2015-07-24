const int trigPin = 5;
const int echoPin = 10;



void setup() {
  
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  
  
}


void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  
  pulseIn(echoPin, HIGH);
  
  long time = pulseIn(echoPin, HIGH);
  long cm= microsecondsToCentimeters(time);
  
  Serial.println("uzaklik : " );
  Serial.println(cm);
  delay(100);
  
  
}

long microsecondsToCentimeters(long microseconds) {
  
  return microseconds /29/2;
  
}
