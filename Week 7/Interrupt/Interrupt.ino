int Push_Button = 3;
int LED_GREEN = 4;
int LED_YELLOW = 5;
int LED_BLUE = 6;
int Emergency_Red_LED = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Push_Button, INPUT_PULLUP);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(Emergency_Red_LED, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(Push_Button), pressInterrupt, LOW);

  
  digitalWrite(Emergency_Red_LED, LOW);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_BLUE, LOW);
}
void loop() {
    light_up();
}

void light_up(){
    digitalWrite(Emergency_Red_LED, LOW);
    digitalWrite(LED_GREEN, HIGH);
    delay(2000);
    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(Emergency_Red_LED, LOW);
    delay(2000);
    digitalWrite(LED_BLUE, HIGH);
    digitalWrite(Emergency_Red_LED, LOW);
    delay(2000);
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_BLUE, LOW);
    digitalWrite(Emergency_Red_LED, LOW);
    delay(2000);
}

void pressInterrupt(){
    digitalWrite(Emergency_Red_LED, HIGH);
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_BLUE, LOW);

}
