#include <InvokController.h>
#include <string.h>
Controller myController("websocket",80,false);
void setup() {
  Serial.begin(115200);
  myController.setHostname("mydevice");
  myController.begin();
  // put your setup code here, to run once:

}

void loop() {
  int u=myController.joystick.getX();
  int v=myController.joystick.getY();
  // put your main code here, to run repeatedly:
  myController.loop();
  Serial.println(String(u)+" "+String(v));
  Serial.flush();
  

}
