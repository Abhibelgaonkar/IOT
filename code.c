int led = 19; // LED pin
void setup() {
pinMode(led, OUTPUT);
Serial.begin(115200);
}
void loop() {
digitalWrite(led, HIGH); 
Serial.println("LED ON!");
delay(1000);
digitalWrite(led, LOW); 
Serial.println("LED OFF!");
delay(1000);
}




//c5-CN7
#include "DHT.h";

#define DHTPIN 32
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
dht.begin();
}

void loop() {

delay(2000);
float h= dht.readHumidity();
float t=dht.readTemperature();

if(isnan(h)||isnan(t))
{
  Serial.println("Failed to read Sensor value");
  return;
}
Serial.print("Humidity:");
Serial.print(h);
Serial.println("%");

Serial.print("Temperature:");
Serial.print(t);
Serial.println("C");
 // put your main code here, to run repeatedly:

}





int light_pin = 32;
void setup() {
pinMode(light_pin, INPUT);
Serial.begin(115200);
}
void loop() {
int light_data = digitalRead(light_pin);
if(light_data==0){
Serial.println("Light Detected!");
}
else{
Serial.println("Light not Detected!");
}
delay(100);
}
