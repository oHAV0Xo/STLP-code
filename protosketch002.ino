int threshold = 399;
int ledPins[] = {2, 13, 53};
void setup() {
  // put your setup code here, to run once:
  int analogInput = A0;
  int pinCount = 3;
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {

  pinMode(ledPins[thisPin], OUTPUT);

  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogInput = 30;
  if(analogInput > threshold)
  {
  digitalWrite(ledPins[1], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPins[1], LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  }
  else(analogInput < threshold);
  {
  digitalWrite(ledPins[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPins[2], LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}
}
