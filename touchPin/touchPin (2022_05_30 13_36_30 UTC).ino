int Touch;
int dt = 1;
void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Touch = touchRead(4);
  //Serial.println(Toogle);  // get value of Touch 0 pin = GPIO 4
  if(Touch <= 30){
    (dt == 1) ? dt = 0: dt = 1;
    Serial.println(dt);
    dt != dt;
  }
  delay(200);
}


