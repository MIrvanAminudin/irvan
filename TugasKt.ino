int LDR= A2;          
int LED= 13;          
int nilaiLDR= 0;  
void setup()
{
  pinMode(LED, OUTPUT);          
  Serial.begin(9600);          
}
void loop()
{
  nilaiLDR= analogRead(LDR);  
  Serial.print("NilaiLDR= ");         
  Serial.println(nilaiLDR);                 
  if(nilaiLDR < 1000) {          
    digitalWrite(LED, HIGH);         
  }
  else  
  {                           
    digitalWrite(LED, LOW);         
  }
}
