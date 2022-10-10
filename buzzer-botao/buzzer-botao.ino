//Ativa buzzer com botão
 
int estadoBotao = 0; //o estado do botão será 0, ou seja, estará desligado

void setup() {
  pinMode (2, INPUT) ; //configura porta 2 como entrada digital
  pinMode (8, OUTPUT) ; // configura porta 8 como saída digital
}
 
void loop() {
  estadoBotao = digitalRead (2) ; //A função digitalRead() é usada para ler o estado lógico
  digitalWrite (8, estadoBotao) ; //A fução digitalWrite() é usada para acionar um valor
}
