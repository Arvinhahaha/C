#define BLINKER_WIFI

#define BLINKER_MIOT_LIGHT
//#include <Blinker.h>

 

char auth[] = "";
char ssid[] = "";

char pswd[] = "";

 

int GPIO = 0; 
 



BlinkerButton Button1("AMDsky");
 



void button1_callback(const String & state) {

 BLINKER_LOG("get button state: ", state);

 digitalWrite(GPIO,1);
 delay(2000);
 digitalWrite(GPIO,0);

 Blinker.vibrate();

}

 

void miotPowerState(const String & state)

{

 BLINKER_LOG("need set power state: ", state);

 if (state == BLINKER_CMD_ON) {

 digitalWrite(GPIO, HIGH);
 delay(2000);
 digitalWrite(GPIO,0);

 BlinkerMIOT.powerState("on");

 BlinkerMIOT.print();

 }

 else if (state == BLINKER_CMD_OFF) {

 digitalWrite(GPIO, LOW);

 BlinkerMIOT.powerState("off");

 BlinkerMIOT.print();

 }

}

