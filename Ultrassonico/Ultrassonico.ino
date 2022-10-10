//Sensor de Distância Ultrassônico HC-SR04

int PinTrigger = 2; //pino usado para disparar os pulsos do sensor

int PinEcho = 3; //pino usado para ler a saída do sensor

float TempoEcho = 0; //variável tempo do eco 

const float velocidadeSom_mps = 340; //em metros por segundo

const float velocidadeSom_mpus = 0.000340; //em metros por microssegundo

void setup()

{

pinMode(PinTrigger, OUTPUT); //configura pino Trigger como saída

digitalWrite(PinTrigger, LOW); //pino trigger - nível baixo

pinMode(PinEcho, INPUT); //configura pino ECHO como entrada

Serial.begin(9600); //inicializa monitor serial 9600 Bps

delay(1000);//atraso de 1000milisegundos

}

void loop()

{

DisparaPulsoUltrassonico(); //dispara pulso ultrassônico

TempoEcho = pulseIn(PinEcho, HIGH); //mede duração do pulso HIGH de eco em micro seg

Serial.print("Distancia em metros: "); //mostra no monitor serial

Serial.println(CalculaDistancia(TempoEcho)/1000000); // mostra o cálculo de distância em metros

Serial.print("Distancia em centimentros: "); //mostra no monitor serial

Serial.println(CalculaDistancia(TempoEcho) / 10000); //mostra o cálculo de distância em cm 

delay(2000); // atraso de 2 segundos

}

void DisparaPulsoUltrassonico()

{

digitalWrite(PinTrigger, HIGH); // pulso alto de Trigger

delayMicroseconds(10); // atraso de 10 milisegundos

digitalWrite(PinTrigger, LOW); // pulso baixo de Trigger

}

float CalculaDistancia(float tempo_us_){

return ((tempo_us_* velocidadeSom_mps)/ 2 ); //calcula distancia em metros

}
