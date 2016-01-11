void setup() {
  pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
     pinMode(11,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
 //FORWARD
  digitalWrite(8, HIGH);
                digitalWrite(9, LOW);
                digitalWrite(10, LOW);
                digitalWrite(11, HIGH);
                  delay(2000);
 //BACKWARD
      digitalWrite(8, LOW);
                digitalWrite(9, HIGH);
                digitalWrite(10, HIGH);
                digitalWrite(11, LOW);
                  delay(2000);
   //LEFT
     digitalWrite (8, LOW);
  digitalWrite (9, HIGH);  
  digitalWrite (10, LOW);
    digitalWrite (11, HIGH);
    delay(2000);
    
   //RIGHT   
       digitalWrite(8, HIGH);
                digitalWrite(9, LOW);
                digitalWrite(10, HIGH);
                digitalWrite(11, LOW);
                  delay(2000);
                  
 
  // put your main code here, to run repeatedly:

}
