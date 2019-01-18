void setup() 
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(13, OUTPUT);
pinMode(11, OUTPUT);
pinMode(9, OUTPUT);

}

void loop() {
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000); 
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
}
