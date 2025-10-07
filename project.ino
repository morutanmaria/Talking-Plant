#include <DHT.h>
#define DHT11PIN 2
#define DHTTYPE DHT11
#define AO_PIN A0 
#define sensorPin A2
DHT dht(DHT11PIN, DHTTYPE);
float h, tc, tf;

int waterSensorPin = A1;
int ledPin = 13;


void setup() {
  delay(200);
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Temperature and Humidity");

}

void loop() {

  //Soil Moisture
  int sensorWater = analogRead(sensorPin);
  if (sensorWater > 0) { 
    Serial.print("Soil Moisture: ");
    Serial.print(sensorWater);
    if(sensorWater > 500)
    {
     Serial.println(" => I need more water, feed me!");
    }
    else Serial.println(" => I am wet enough, thanks <3");
    
  }
 
 //Water level
  int sensorValue = analogRead(waterSensorPin);
  Serial.print("Water Level: ");
  Serial.print(sensorValue);
  if(sensorValue < 300)
  {
    Serial.println(" => Pour more water in the tray!");
  } 
  else Serial.println(" => I have enough water in the tray <3");

//Light
  int lightValue = analogRead(AO_PIN);
  Serial.print("Light Level: ");
  Serial.print(lightValue);
  if(lightValue > 500)
  {
    Serial.println(" => I am dying, i need light!");
  }
  else Serial.println(" => I love photosynthesis, now i have enough light <3");

//Temperature + Humidity
  h = dht.readHumidity();
  tc = dht.readTemperature();
  tf = dht.readTemperature(true);

  Serial.print('\n');
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.print("%,  ");
  Serial.print("Temperature = ");
  Serial.print(tc);
  Serial.print("°C, ");
  Serial.print(tf);
  Serial.println("°F");

  delay(2000);
}