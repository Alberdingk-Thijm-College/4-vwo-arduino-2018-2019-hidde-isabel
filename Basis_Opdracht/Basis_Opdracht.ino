void setup() 
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(13, OUTPUT);
pinMode(11, OUTPUT);
pinMode(9, OUTPUT);

}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(1000); 
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
}
