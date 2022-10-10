//Sensor LDR

#define AnalogLDR A0 // define pino analógico A0

#define Limiar 1.5 // define constante igual a 1.5

#define ledPin 2 // define pino digital D2

int Leitura = 0; // variável inteiro igual a zero

float VoltageLDR; // variavel numero fracionario

float ResLDR; // variavel numero fracionario



void setup()

{

pinMode(ledPin, OUTPUT); // configura D13 como saida digital

Serial.begin(9600); // monitor serial - velocidade 9600 Bps

delay(100); // atraso de 100 milisegundos

}

void loop()

{

Leitura = analogRead(AnalogLDR); // leitura da tensão no pino analógico A0

VoltageLDR = Leitura * (5.0/1024); // imprime no monitor serial

Serial.print("Leitura sensor LDR = "); // imprime a tensão do LDR

Serial.println(VoltageLDR);

if (VoltageLDR > Limiar) //se a tensão LDR maior do que limiar

 digitalWrite(ledPin, HIGH); //liga LED com 5V

else //senão a tensão LDR < limiar

 digitalWrite(ledPin, LOW); //desliga LED com 0V

delay(500); // atraso de 500 milisegundos

}
