// Sensor LDR
#define AnalogLDR A0
#define ledRed 2
#define ledGreen 4
int Leitura = 0;

void setup() {
pinMode(ledRed, OUTPUT);
pinMode(ledGreen, OUTPUT);
pinMode(AnalogLDR,INPUT);
Serial.begin(9600);
delay(100);
}
void loop() {
 Leitura =analogRead(AnalogLDR);
 if(Leitura > 700){
  digitalWrite(ledRed,HIGH);
 }else{
  digitalWrite(ledRed,LOW);
 }
 if(Leitura < 700){
  digitalWrite(ledGreen,HIGH);
 }else{
  digitalWrite(ledGreen,LOW);
 }
 
 Serial.println(Leitura);
 delay(150);
}
