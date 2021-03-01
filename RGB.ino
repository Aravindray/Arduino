int redpin=9;
int greenpin=6;
int bluepin=3;
String msg="What color do you want?";
String Color;

void setup() {
    pinMode(redpin,OUTPUT);
    pinMode(greenpin,OUTPUT);
    pinMode(bluepin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println(msg);
    while(Serial.available()==0){

    }
    Color=Serial.readString();
    if (Color=="red"){
        digitalWrite(redpin,HIGH);
        digitalWrite(greenpin,LOW);
        digitalWrite(bluepin,LOW);
    }
    if (Color=="green"){
        digitalWrite(redpin,LOW);
        digitalWrite(greenpin,HIGH);
        digitalWrite(bluepin,LOW);
    }
    if (Color=="blue"){
        digitalWrite(redpin,LOW);
        digitalWrite(greenpin,LOW);
        digitalWrite(bluepin,HIGH);
    }
    if (Color=="off"){
        digitalWrite(redpin,LOW);
        digitalWrite(greenpin,LOW);
        digitalWrite(bluepin,LOW);
    }
    if (Color=="aqua"){
        digitalWrite(redpin,LOW);
        analogWrite(greenpin,255);
        analogWrite(bluepin,80);
    }
    if (Color=="white"){
        analogWrite(redpin,255);
        analogWrite(greenpin,255);
        analogWrite(bluepin,255);
    }
}