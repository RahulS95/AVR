int incomingByte = 0;   // for incoming serial data

int led = 13;
int rm1=11;
int rm2=10;
int lm1=9;
int lm2=8;
void setup() 
{
   pinMode(led, OUTPUT);  
   pinMode(rm1, OUTPUT);  
   pinMode(rm2, OUTPUT);  
   pinMode(lm1, OUTPUT);
   pinMode(lm2, OUTPUT);  


 Serial.begin(9600);    
}

void loop() 
{
digitalWrite(led, HIGH);
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();
                
                Serial.println(incomingByte, DEC);
                if(incomingByte=='S'||incomingByte=='s')
                {
                digitalWrite(rm1, HIGH);
                digitalWrite(rm2, LOW);
                digitalWrite(lm1, HIGH);
                digitalWrite(lm2, LOW);
               
                }
                if(incomingByte=='W'||incomingByte=='w')
                {
                  digitalWrite(rm1, LOW);
                digitalWrite(rm2, HIGH);
                digitalWrite(lm1, LOW);
                digitalWrite(lm2, HIGH);
                
                }
                if(incomingByte=='D'||incomingByte=='d')
                {
                  digitalWrite(rm1, HIGH);
                digitalWrite(rm2, LOW);
                digitalWrite(lm1, LOW);
                digitalWrite(lm2, HIGH);
                
                }
                if(incomingByte=='A'||incomingByte=='a')
                {
                  digitalWrite(rm1, LOW);
                digitalWrite(rm2, HIGH);
                digitalWrite(lm1, HIGH);
                digitalWrite(lm2, LOW);
                
                }
                if(incomingByte=='Z'||incomingByte=='z')
                {
                  digitalWrite(rm1, LOW);
                digitalWrite(rm2, LOW);
                digitalWrite(lm1, LOW);
                digitalWrite(lm2, LOW);
                }
                
                
        }
}
 

