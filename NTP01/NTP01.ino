#include <WiFi.h>

#define TACT_SW 36
#define SENSOR_W1 34
#define VALVE01 27
#define VALVE02 14
#define VALVE03 13
#define VALVE04 21
#define PUMP01 25
#define PUMP02 26

int tact01 = 1;
int valve01 = 0;
int tact02 = 1;
int valve02 = 0;
int valve03 = 0;
int valve04 = 0;
int pump01 = 0;
int pump02 = 0;

int MotarAwakuHour = 6;
int MotarAwakuMin = 30;

const char* ssid       = "TP-LINK_DEA7";
const char* password   = "44729776";

const char* ntpServer = "ntp.nict.jp";
const long  gmtOffset_sec = 3600*9; // JST
const int   daylightOffset_sec = 0; 
struct tm timeinfo;
byte Hour = 0;
byte Min = 0;

void printLocalTime(){
  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    return;
  }
  Serial.println(&timeinfo, "%H:%M");
}

void setup(){
  //display.setBrightness(0x0f);
  Serial.begin(115200);
   
  //connect to WiFi
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }
  Serial.println(" CONNECTED");

  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);

  pinMode(VALVE01, OUTPUT);
  pinMode(VALVE02, OUTPUT);
  pinMode(VALVE03, OUTPUT);
  pinMode(VALVE04, OUTPUT);
  pinMode(PUMP01, OUTPUT);
  pinMode(PUMP02, OUTPUT);
  pinMode(SENSOR_W1, INPUT);
  pinMode(TACT_SW, INPUT);

  digitalWrite(VALVE01,HIGH);
  digitalWrite(VALVE02,HIGH);
  digitalWrite(VALVE03,HIGH);
  digitalWrite(VALVE04,HIGH);
  digitalWrite(PUMP01,HIGH);
  digitalWrite(PUMP02,HIGH);
  delay(1000);

  digitalWrite(VALVE01,LOW);
  digitalWrite(VALVE02,LOW);
  digitalWrite(VALVE03,LOW);
  digitalWrite(VALVE04,LOW);
  digitalWrite(PUMP01,LOW);
  digitalWrite(PUMP02,LOW);



}   

void loop(){

  unsigned long ti = 1000;
  unsigned long sec = 8;

  digitalWrite(VALVE01,LOW);
  digitalWrite(VALVE02,LOW);
  digitalWrite(VALVE03,LOW);
  digitalWrite(VALVE04,LOW);
  digitalWrite(PUMP01,LOW);
  digitalWrite(PUMP02,LOW);

  if(digitalRead(TACT_SW) != tact01 && digitalRead(TACT_SW) == 0){
    Serial.println( "tactsw_On");
    if(valve01 == 0){

      digitalWrite(VALVE04,HIGH);
      digitalWrite(PUMP02,HIGH);
      valve04 = 1;
      pump02 = 1;
      delay(sec * ti);
      digitalWrite(VALVE04,LOW);
      digitalWrite(PUMP02,LOW);
      valve04 = 0;
      pump02 = 0;

      digitalWrite(VALVE01,HIGH);
      digitalWrite(PUMP01,HIGH);
      valve01 = 1;
      pump01 = 1;
      delay(sec * ti);
      digitalWrite(VALVE01,LOW);
      digitalWrite(PUMP01,LOW);
      valve01 = 0;
      pump01 = 0;
    }else if(valve01 == 1){
      digitalWrite(VALVE04,LOW);
      digitalWrite(PUMP02,LOW);
      valve04 = 0;
      pump02 = 0;

      digitalWrite(VALVE01,LOW);
      digitalWrite(PUMP01,LOW);
      valve01 = 0;
      pump01 = 0;
    }
  }

  if(digitalRead(SENSOR_W1) != tact02 && digitalRead(SENSOR_W1) == 0){
    Serial.println( "sensor_w1_On");
    if(valve04 == 0){
      digitalWrite(VALVE04,HIGH);
      digitalWrite(PUMP02,HIGH);
      valve04 = 1;
      pump02 = 1;
      delay(sec * ti);

      digitalWrite(VALVE04,LOW);
      digitalWrite(PUMP02,LOW);
      valve04 = 0;
      pump02 = 0;
    }else if(valve04 == 1){
      digitalWrite(VALVE04,LOW);
      digitalWrite(PUMP02,LOW);
      valve04 = 0;
      pump02 = 0;
    }
  }
  
  tact01 = digitalRead(TACT_SW);   
  tact02 = digitalRead(SENSOR_W1);   

  getLocalTime(&timeinfo);
    Hour = timeinfo.tm_hour;
    Min  = timeinfo.tm_min;  
  Serial.print(Hour);Serial.print(":");Serial.println(Min);
 
  if(int(Hour) == MotarAwakuHour && int(Min) == MotarAwakuMin){
    Serial.println( "timeArarm_On");
    if(valve01 == 0){
      digitalWrite(VALVE04,HIGH);
      digitalWrite(PUMP02,HIGH);
      valve04 = 1;
      pump02 = 1;
      delay(sec * ti);

      digitalWrite(VALVE04,LOW);
      digitalWrite(PUMP02,LOW);
      valve04 = 0;
      pump02 = 0;

      digitalWrite(VALVE01,HIGH);
      digitalWrite(PUMP01,HIGH);
      valve01 = 1;
      pump01 = 1;
      delay(sec * ti);

      digitalWrite(VALVE01,LOW);
      digitalWrite(PUMP01,LOW);
      valve01 = 0;
      pump01 = 0;
      delay(60 * ti);

    }else if(valve01 == 1){
      digitalWrite(VALVE01,LOW);
      digitalWrite(PUMP01,LOW);
      valve01 = 0;
      pump01 = 0;
      digitalWrite(VALVE04,LOW);
      digitalWrite(PUMP02,LOW);
      valve04 = 0;
      pump02 = 0;
      
    }
  }
  
}
