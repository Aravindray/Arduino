int redpin=9;
int greenpin=6;
int bluepin=3;
String msg="What color do you want?";
String Color;
/*https://www.rapidtables.com/web/color/RGB_Color.html#:~:text=RGB%20color%20space%20or%20RGB%20color%20system%2C%20constructs,256%2A256%2A256%3D16777216%20possible%20colors.%20RGB%20%E2%89%A1%20Red%2C%20Green%2C%20Blue*/
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
    if (Color=="off"){
        digitalWrite(redpin,LOW);
        digitalWrite(greenpin,LOW);
        digitalWrite(bluepin,LOW);
    }
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
    if (Color=="aqua"){
        digitalWrite(redpin,LOW);
        analogWrite(greenpin,255);
        analogWrite(bluepin,255);
    }
    if (Color=="white"){
        analogWrite(redpin,255);
        analogWrite(greenpin,255);
        analogWrite(bluepin,255);
    }
    if (Color=="yellow"){
        analogWrite(redpin,255);
        analogWrite(greenpin,255);
        analogWrite(bluepin,0);
    }
    if (Color=="Fuchsia"){
        analogWrite(redpin,255);
        analogWrite(greenpin,0);
        analogWrite(bluepin,255);
    }
}