
char* in;
int x=0;
const byte numChars = 32;
char receivedChars[numChars]; // an array to store the received data
boolean newData = false;
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

pinMode(12,OUTPUT);
pinMode(13,OUTPUT);



Serial.print("Choose LED Dispaly:\n               1. Factory Default\n               2. AP Mode\n               3. Setup Complete\n               4. Fault\n               5. Alarm\n               6. Battery Low\n               7. Proposed: Fault\n               8. Proposed: Batt Low\n               9. Proposed: Critical\n\n");

}

void READ() {

  
  static byte ndx = 0;
  char endMarker = '\n';
  char rc;
 
  if (Serial.available() > 0) {
    while (Serial.available() > 0 && newData == false) {
  rc = Serial.read();

  if (rc != endMarker) {
    receivedChars[ndx] = rc;
    ndx++;
    if (ndx >= numChars) {
    ndx = numChars - 1;
    }
  }
    
 else {
   receivedChars[ndx] = '\0'; // terminate the string
   ndx = 0;
    newData = true;
  }
 }
}
}
void showNewData() {
  if (newData == true) {
    Serial.print("This just in ... ");
    Serial.println(receivedChars);
   // newData = false;
 }
}

void loop() {
  while(newData==false){
  READ();
  in = receivedChars;
  //showNewData();
  if(strcmp(in, "1") == 0){
    x=1;
  }
  else if(strcmp(in, "2") == 0){
    x=2;
  }
  else if(strcmp(in, "3") == 0){
    x=3;
  }
  else if(strcmp(in, "4") == 0){
    x=4;
  }
  else if(strcmp(in, "5") == 0){
    x=5;
  }
  else if(strcmp(in, "6") == 0){
    x=6;
  }
  else if(strcmp(in, "7") == 0){
    x=7;
  }
  else if(strcmp(in, "8") == 0){
    x=8;
  }
  else if(strcmp(in, "9") == 0){
    x=9;
  }
  else{
    x=10;
  }
  }
 // Serial.print("done\n");
 // Serial.println(x);
  newData=false;
 
  switch(x){

case 0:
break;

case 1:
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
x=0;
break;

case 2:
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
x=0;
break;

case 3:
//Setup Complete
Serial.print("Setup Complete\n");
digitalWrite(12,1);
delay(5000);
digitalWrite(12,0);
x=0;
break;

case 4:
//Fault
Serial.print("Fault\n");
digitalWrite(13,1);
delay(2000);
digitalWrite(13,0);
x=0;
break;

case 5:
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
x=0;
break;

case 6:
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
x=0;
break;

case 9:
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
x=0;
break;

case 7:
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
x=0;
break;

case 8:
//Proposed: BattLow
Serial.print("Proposed: Batt Low\n");
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(200);
break;
x=0;
break;


default:
x=0;
break;

delay(100);
}

}
