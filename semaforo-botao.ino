//Prática semáforo com botão para pedestre - Vitória 

int estadoBotao = 0;
int pedVerde = 12; // Setar portas digitais 
int pedVermelho = 11;
int carroVerde = 8;
int carroAmarelo = 6;
int carroVermelho = 3;

void setup()
{
  pinMode (2, INPUT) ;
  pinMode(pedVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);
  digitalWrite(carroVerde, HIGH);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pedVerde, LOW);
  digitalWrite(pedVermelho, HIGH);

}

void loop()
{
  estadoBotao = digitalRead (2) ;
   
  if (estadoBotao==1) {
      digitalWrite(carroVerde, LOW);
      digitalWrite(carroAmarelo, HIGH);
      delay(2000);
      digitalWrite(carroAmarelo, LOW);         
      digitalWrite(carroVermelho, HIGH);
      for(int x = 0; x<5; x++)
  		{
    		digitalWrite(pedVermelho, HIGH);
    		delay(250);
    		digitalWrite(pedVermelho, LOW);
    		delay(250);

  		} 
      digitalWrite(pedVerde, HIGH);
      delay(5000);

   	  for(int x = 0; x<5; x++)
  		{
    		digitalWrite(pedVerde, HIGH);
    		delay(250);
    		digitalWrite(pedVerde, LOW);
    		delay(250);

  		} 
  
  	  digitalWrite(pedVerde, LOW);
  	  digitalWrite(pedVermelho, HIGH); 
      delay(1000);   
      digitalWrite(carroVermelho, LOW);
      digitalWrite(carroVerde, HIGH);

      estadoBotao=0;
   
    }
 }