// C++ code
//
#define pinoLDR A0
#define LED01 8
  
void setup()
{
  Serial.begin(9600);
  pinMode(LED01, OUTPUT);
}

void loop()
{
  int valorLDR = analogRead(pinoLDR);
  Serial.println(valorLDR);
  
  if (valorLDR<400){
    digitalWrite(LED01, 1);
  }else{
    digitalWrite(LED01, 0);
  }
    
}