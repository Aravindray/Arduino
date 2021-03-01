int FirstLed=2;
int SecondLed=4;
int ThirdLed=6;
int FouthLed=8;
int Delay=500;
void setup() {
    pinMode(FirstLed,OUTPUT);
    pinMode(SecondLed,OUTPUT);
    pinMode(ThirdLed,OUTPUT);
    pinMode(FouthLed,OUTPUT);
}
void loop() {
    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,LOW);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,LOW);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,LOW);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,LOW);
    delay(Delay);

    digitalWrite(FirstLed,HIGH);
    digitalWrite(SecondLed,HIGH);
    digitalWrite(ThirdLed,HIGH);
    digitalWrite(FouthLed,HIGH);
    delay(Delay);
}