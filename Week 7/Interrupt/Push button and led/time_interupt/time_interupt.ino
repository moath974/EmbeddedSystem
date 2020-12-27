volatile boolean ledOn= false;
  const int Push=2;
  const int LED=13;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Push, INPUT);
  attachInterrupt(0,buttonPressed,RISING);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void buttonPressed()
{
  if(ledOn)
  {
    ledOn = false;
    digitalWrite(LED,LOW);
  }
  else
  {
    ledOn = true;
    digitalWrite(LED,HIGH);
  }
}
