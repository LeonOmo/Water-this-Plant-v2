#include <WiFi.h>
#include <HTTPClient.h>

const int Sensor = 34; 
const int soilMoistlvlLow = 844;
const int soilMoistlvlHigh = 377;

const int LedHigh = 8;
const int LedLow = 12;

const char* ssid = "WIFI_SSID";
const char* password = "WIFI_PASSWORD";

const char* alertServer = "http://api.callmebot.com/whatsapp.php?phone=YOUR_NUMBER&text=Water+your+Plant!&apikey=YOUR_KEY";

void setup() {
  Serial.begin(115200);
  pinMode(Sensor, INPUT); 

  pinMode(LedHigh, OUTPUT);
  pinMode(LedLow, OUTPUT);

  int soilMoist = analogRead(Sensor);
  Serial.print("Analog Value: ");
  Serial.print(soilMoist); 

  int percentSoilMoist = map(soilMoist, soilMoistlvlHigh, soilMoistlvlLow, 100, 0);
  Serial.print("\t");
  Serial.print(percentSoilMoist);
  Serial.println(" %");

  if (percentSoilMoist < 30) {
    digitalWrite(LedLow, HIGH);
    digitalWrite(LedHigh, LOW);
    
    sendPhoneAlert();
    
  } else {
    digitalWrite(LedLow, LOW);
    digitalWrite(LedHigh, HIGH);
  }

  delay(3000); 

  digitalWrite(LedLow, LOW);
  digitalWrite(LedHigh, LOW);
  
  Serial.println("Sleep Mode (30min)");
  esp_sleep_enable_timer_wakeup(30ULL * 60ULL * 1000000ULL); 
  esp_deep_sleep_start();
}

void loop() {
}

void sendPhoneAlert() {
  if (WiFi.status() != WL_CONNECTED) {
    WiFi.begin(ssid, password);
    unsigned long startAttemptTime = millis();
    
    while (WiFi.status() != WL_CONNECTED && millis() - startAttemptTime < 10000) {
      delay(500);
      Serial.print(".");
    }
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWifi connected...");
    HTTPClient http;
    http.begin(alertServer);
    int httpResponseCode = http.GET();
    
    if (httpResponseCode > 0) {
      Serial.println("Connected Sucessfully!");
    } else {
      Serial.print("Not Connected: ");
      Serial.println(httpResponseCode);
    }
    http.end();
    
    WiFi.disconnect(true);
  } else {
    Serial.println("\nCoulnt create a Wifi connection!.");
  }
}