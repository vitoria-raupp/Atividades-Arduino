//Programa : Piscar Led
//Autor : 
 
void setup() {
  //Define a porta do led como saída
  pinMode(8, OUTPUT);
}
 
void loop() {
  //Acende o led
  digitalWrite(8, HIGH);
   
  //Aguarda o intervalo especificado
  delay(500);
   
  //Apaga o led
  digitalWrite(8, LOW);
  //Aguarda o intervalo especificado           
  delay(500);                  
}
