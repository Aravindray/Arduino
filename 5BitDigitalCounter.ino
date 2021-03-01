int counter = -1;
int MAX_VALUE = 32;
int pin1=2;
int pin2=4;
int pin3=6;
int pin4=8;
int pin5=10;
int DelayTime=770;

void updateLED(int pin, int bit, int ctr) {
  digitalWrite(pin, (ctr & (1<<bit)) == (1<<bit) ? HIGH : LOW);
}
void setup() {
  // this runs once
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {
  // this runs repeatedly
  counter = (counter + 1) % MAX_VALUE;
  updateLED(pin1, 0, counter);
  updateLED(pin2, 1, counter);
  updateLED(pin3, 2, counter);
  updateLED(pin4, 3, counter);
  updateLED(pin5, 4, counter);
  delay(DelayTime);
}