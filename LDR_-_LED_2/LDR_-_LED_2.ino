// Sensor LDR 2 

#define AnalogLDR A0 
#define ledPin1 2
#define ledPin2 4
int Leitura = 0; 

void setup() { 

pinMode(ledPin1, OUTPUT); 
pinMode(ledPin2, OUTPUT); 
pinMode(AnalogLDR,INPUT); 
Serial.begin(9600); 
delay(100);
} 

void loop() { 

Leitura =analogRead(AnalogLDR);

if(Leitura > 700){ 
digitalWrite(ledPin1,HIGH); 
}else{ 
digitalWrite(ledPin1,LOW); 
} 
if(Leitura < 700){
  digitalWrite(ledPin2,HIGH);
  delay(100);
  digitalWrite(ledPin2,LOW);
  delay(100);
}else{
  digitalWrite(ledPin2, LOW);
}
Serial.println(Leitura); 
delay(150); 
}
