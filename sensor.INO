const int sn1 = 2; 
  const int sn2 = 3;
  int sv1 = 0;
  int sv2 = 0;
  
  
void setup() {
 
    pinMode(sn1, INPUT);
    pinMode(sn2, INPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
}

void loop() {
  sv1 = digitalRead(sn1);
   sv2 = digitalRead(sn2);
   
   
   if((sv1==LOW)&&(sv2==LOW))      

   {
      digitalWrite (8, HIGH);
   digitalWrite (9, LOW);
    digitalWrite (10, HIGH);
     digitalWrite (11, LOW);
     delay(500);
   }
    if((sv1==HIGH)&&(sv2==HIGH))
   {
      digitalWrite (8, LOW);
   digitalWrite (9, HIGH);
    digitalWrite (10, LOW);
     digitalWrite (11, HIGH);
     delay(1500);
     
      digitalWrite (8, HIGH);
   digitalWrite (9, LOW);
    digitalWrite (10, LOW);
     digitalWrite (11, LOW);
     delay(500);
     
   }
   if((sv1==LOW)&&(sv2==HIGH))
   {
      digitalWrite (8, LOW);
   digitalWrite (9, LOW);
    digitalWrite (10, HIGH);
     digitalWrite (11, LOW);
     delay(500);
   }
    if((sv1==HIGH)&&(sv2==LOW))
   {
      digitalWrite (8, HIGH);
   digitalWrite (9, HIGH);
    digitalWrite (10, LOW);
     digitalWrite (11, HIGH);
     delay(500);
   }

}
