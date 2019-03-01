void setup() {
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {

digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, LOW); 
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(8, HIGH);
  delay(1000); 
  digitalWrite(8, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH); 
  delay(500); 
  digitalWrite(2, LOW);
  digitalWrite(9, HIGH);
  delay(1000); 
  digitalWrite(9, LOW); 
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500); 
  digitalWrite(3, LOW); 
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(4, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW); 
  digitalWrite(4, HIGH);
}
