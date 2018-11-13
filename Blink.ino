void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

Serial.print("Setup Complete");

}

void loop() {

//Factory Default
Serial.print("Factory Default\n"); 
digitalWrite(12,1);
delay(100);
digitalWrite(12,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(12,1);
delay(100);
digitalWrite(12,0);
delay(300);

delay(4000);

//Access Point Mode
Serial.print("AP Mode\n");
digitalWrite(12,1);
delay(100);
digitalWrite(12,0);
delay(2000);
digitalWrite(12,1);
delay(100);
digitalWrite(12,0);
delay(2000);
digitalWrite(12,1);
delay(100);
digitalWrite(12,0);

delay(4000);

//Setup Complete
Serial.print("Setup Complete\n");
digitalWrite(12,1);
delay(5000);
digitalWrite(12,0);

delay(4000);

//Fault
Serial.print("Fault\n");
digitalWrite(13,1);
delay(2000);
digitalWrite(13,0);

delay(4000);

//Alarm
Serial.print("Alarm\n");
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);

delay(4000);

//BatteryLow
Serial.print("Battery Low\n");
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(500);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(500);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(500);

delay(4000);

//Proposed: Critical
Serial.print("Proposed: Critical\n");
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);

delay(4000);

//Proposed: Event
Serial.print("Proposed: Event\n");
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);

delay(4000);

//Proposed: BattLow
Serial.print("Proposed: Batt Low\n");
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);

delay(4000);
}
