int redLED=2;
int greenLED=6;
int blueLED=13;
int redBlink=50;
int greenBlink=150;
int blueBlink=300;
void setup() {
    pinMode(redLED,OUTPUT);
    pinMode(greenLED,OUTPUT);
    pinMode(blueLED,OUTPUT);
}
void loop() {
    digitalWrite(redLED,HIGH);
    delay(redBlink);
    digitalWrite(redLED,LOW);
    delay(redBlink);

    digitalWrite(redLED,HIGH);
    delay(redBlink);
    digitalWrite(redLED,LOW);
    delay(redBlink);

    digitalWrite(redLED,HIGH);
    delay(redBlink);
    digitalWrite(redLED,LOW);
    delay(redBlink);

    digitalWrite(redLED,HIGH);
    delay(redBlink);
    digitalWrite(redLED,LOW);
    delay(redBlink);

    digitalWrite(redLED,HIGH);
    delay(redBlink);
    digitalWrite(redLED,LOW);
    delay(redBlink);

    digitalWrite(greenLED,HIGH);
    delay(greenBlink);
    digitalWrite(greenLED,LOW);
    delay(greenBlink);

    digitalWrite(greenLED,HIGH);
    delay(greenBlink);
    digitalWrite(greenLED,LOW);
    delay(greenBlink);

    digitalWrite(greenLED,HIGH);
    delay(greenBlink);
    digitalWrite(greenLED,LOW);
    delay(greenBlink);

    digitalWrite(greenLED,HIGH);
    delay(greenBlink);
    digitalWrite(greenLED,LOW);
    delay(greenBlink);

    digitalWrite(greenLED,HIGH);
    delay(greenBlink);
    digitalWrite(greenLED,LOW);
    delay(greenBlink);

    digitalWrite(blueLED,HIGH);
    delay(blueBlink);
    digitalWrite(blueLED,LOW);
    delay(blueBlink);

    digitalWrite(blueLED,HIGH);
    delay(blueBlink);
    digitalWrite(blueLED,LOW);
    delay(blueBlink);

    digitalWrite(blueLED,HIGH);
    delay(blueBlink);
    digitalWrite(blueLED,LOW);
    delay(blueBlink);

    digitalWrite(blueLED,HIGH);
    delay(blueBlink);
    digitalWrite(blueLED,LOW);
    delay(blueBlink);

    digitalWrite(blueLED,HIGH);
    delay(blueBlink);
    digitalWrite(blueLED,LOW);
    delay(blueBlink);
}