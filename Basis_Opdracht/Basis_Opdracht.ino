 int remember = 0;

void setup() {
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, INPUT); //ROAD 1
pinMode(7, INPUT); //ROAD 2
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, INPUT); 
pinMode(14, INPUT); //ROAD 3
pinMode(15, INPUT); //ROAD 4
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


if(remember == 1)
{
  wait(500);
  digitalWrite(12, HIGH); 
  digitalWrite(5, LOW); 
  wait(1000);
  digitalWrite(12, LOW);
  digitalWrite(5, HIGH);
  remember = 0;
}
}

void wait(int seconds)
{
  while(seconds > 0)
  {
    if(digitalRead(13)==HIGH)
    {
      remember = 1;
      Serial.println("knopje aan");
    }
    delay(1);
    seconds--;
  }
  while(seconds > 0)
  { if digitalRead(Road1)==HIGH)
    {
      RoadA = 1
      Serial.println("Road A")
     
    }
  }
  while(seconds > 0)
  { if digitalRead(Road2)==HIGH)
    {
      RoadA = 1
      Serial.println("Road B")
    }
  }
    while(seconds > 0)
  { if digitalRead(Road3)==HIGH)
    {
      RoadA = 1
      Serial.println("Road C")
    }
  }
    while(seconds > 0)
  { if digitalRead(Road4)==HIGH)
    {
      RoadA = 1
      Serial.println("Road D")
    }
  }
}




 
