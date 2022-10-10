//Sensor de temperatura NTC

#define Vin 5.0 //define constante igual a 5.0

#define T0 298.15 //define constante igual a 298.15 Kelvin

#define Rt 10000 //Resistor do divisor de tensao

#define R0 10000 //Valor da resistencia inicial do NTC

#define T1 273.15 //[K] in datasheet 0º C

#define T2 373.15 //[K] in datasheet 100° C

#define RT1 35563 //[ohms] resistencia in T1

#define RT2 549 //[ohms] resistencia in T2

float beta = 0.0; //parametros iniciais [K]

float Rinf = 0.0; //parametros iniciais [ohm]

float TempKelvin = 0.0; //variable output

float TempCelsius = 0.0; //variable output

float Vout = 0.0; //Vout in A0

float Rout = 0.0; //Rout in A0

void setup()

{

Serial.begin(9600); //monitor serial - velocidade 9600 Bps

beta = (log(RT1 / RT2)) / ((1 / T1) - (1 / T2)); // cálculo de beta

Rinf = R0 * exp(-beta / T0); // cálculo de Rinf

delay(100); // atraso de 100 milissegundos

}

void loop(){

Vout = Vin * ((float)(analogRead(0)) / 1024.0); //cálculo de V0 e leitura de A0

Rout = (Rt * Vout / (Vin - Vout)); //cálculo de Rout

TempKelvin = (beta / log(Rout / Rinf)); //cálculo da temp. em Kelvins

TempCelsius = TempKelvin - 273.15; //cálculo da temp. em Celsius

Serial.print("Temperatura em Celsius: "); //imprime no monitor serial

Serial.print(TempCelsius); //imprime temperatura Celsius

Serial.print("Temperatura em Kelvin: "); //imprime no monitor serial

Serial.println(TempKelvin); //imprime temperatura Kelvins

delay(2000); // atraso de 2000 milissegundos

}
