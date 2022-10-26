// Sensor LDR
#define AnalogLDR A0
#define ledPin 2
int Leitura = 0;

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(AnalogLDR,INPUT);
Serial.begin(9600);
delay(100);
}
void loop() {
 Leitura =analogRead(AnalogLDR);
 if(Leitura > 700){
  digitalWrite(ledPin,HIGH);
 }else{
  digitalWrite(ledPin,LOW);
 }
 Serial.println(Leitura);
 delay(150);
}
