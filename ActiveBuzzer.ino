int myNum;
int buzzPin=9;
String msg="Enter Your Number";
int dt=500;

void setup(){
    Serial.begin(9600);
    pinMode(buzzPin,OUTPUT);
}

void loop(){
    Serial.println(msg);
    while (Serial.available()==0){

    }
    myNum=Serial.parseInt();
    if (myNum>10){
        digitalWrite(buzzPin,HIGH);
        delay(dt);
        digitalWrite(buzzPin,LOW);
        delay(dt);
    }
}