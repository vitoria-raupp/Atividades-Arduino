// Semáforo 

int pedVerde = 3;
int pedVermelho = 6;
int carroVerde = 10;
int carroAmarelo = 11;
int carroVermelho = 12;

void setup(){
  pinMode(pedVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);  
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);
  
  digitalWrite(carroVerde, HIGH);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(pedVerde, LOW);
  digitalWrite(pedVermelho, HIGH);
}

void loop(){
  digitalWrite(carroVerde,HIGH);
  digitalWrite(pedVermelho, HIGH);

  delay(5000);

  digitalWrite(carroVerde, HIGH);
  digitalWrite(pedVermelho,HIGH);
  digitalWrite(carroAmarelo, HIGH);

  delay(3000);

  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);
  digitalWrite(pedVermelho, LOW);
  digitalWrite(pedVerde, HIGH);

  delay(5000);

  digitalWrite(pedVerde, LOW);

  for(int x = 0; x < 5; x ++){
    digitalWrite(pedVermelho, HIGH);
    delay(250);
    digitalWrite(pedVermelho, LOW);
    delay(250);
    }
    digitalWrite(carroVermelho, LOW);
  }
