int remember = 0;
int RoadA = 13;
int RoadB = 7; 


void setup() {

pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(RoadA, INPUT); 
pinMode(RoadB, INPUT); 
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, INPUT); 
Serial.begin(9600);
}

void loop() {

digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, LOW); 
  wait(500);
  digitalWrite(1, LOW);
  digitalWrite(8, HIGH);
  wait(1000); 
  digitalWrite(8, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH); 
  wait(500); 
  digitalWrite(2, LOW);
  digitalWrite(9, HIGH);
  wait(1000); 
  digitalWrite(9, LOW); 
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  wait(500); 
  digitalWrite(3, LOW); 
  digitalWrite(10, HIGH);
  wait(1000);
  digitalWrite(4, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(10, LOW);
  wait(500);
  digitalWrite(4, LOW);
  digitalWrite(11, HIGH);
  wait(1000);
  digitalWrite(11, LOW); 
  digitalWrite(4, HIGH);
 
}

void wait(int seconds)
{
 while(seconds > 0)
 {
 
    delay(1);
    seconds--;
  
    if (digitalRead(13)==HIGH)
    {
      digitalWrite(1, HIGH); 
      digitalWrite(2, HIGH); 
      digitalWrite(3, HIGH); 
      digitalWrite(4, HIGH); 
      digitalWrite(5, HIGH); 
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW); 
      delay(500);
      digitalWrite(8, HIGH);
      digitalWrite(1, LOW);
      delay(1000);
      digitalWrite(8, LOW);
      digitalWrite(1, HIGH); 
      Serial.println("Road A");
    }
    
    if (digitalRead(RoadB)==HIGH)
    {
      
      Serial.println("Road B");
    }
  
  }
 }

 
