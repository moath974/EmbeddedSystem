
RTC_DATA_ATTR int counter=0;  // everthing will be safe after comming out of deep sleep 
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.println("booting");
++counter; //add 1 to counter

pinMode(5, OUTPUT);
delay(500);

digitalWrite(5, HIGH);
delay(2000);
//inside this loop we can see what will happen after booting
for(int i=0; i<= counter; i++){
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(5, HIGH);
  delay(200);
}
delay(2000);

//sleep in micro seconds
esp_sleep_enable_timer_wakeup(3000000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
