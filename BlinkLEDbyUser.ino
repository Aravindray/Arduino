int gpin=2;
int rpin=5;
int ypin=8;
String msg="Which color do you want to Glow?";
String SelectColor;
int DT=500;
int i;

void setup(){
    pinMode(gpin,OUTPUT);
    pinMode(rpin,OUTPUT);
    pinMode(ypin,OUTPUT);
    Serial.begin(9600);
}

void loop(){
Serial.println(msg);
while (Serial.available()==0) {

}
SelectColor=Serial.readString();
Serial.print(SelectColor);
Serial.println(" will going to Glow");
if (SelectColor=="Green")
{
    digitalWrite(gpin,HIGH);
    digitalWrite(rpin,LOW);
    digitalWrite(ypin,LOW);
}
if (SelectColor=="Red")
{
    digitalWrite(gpin,LOW);
    digitalWrite(rpin,HIGH);
    digitalWrite(ypin,LOW);
}
if (SelectColor=="Yellow")
{
    digitalWrite(gpin,LOW);
    digitalWrite(rpin,LOW);
    digitalWrite(ypin,HIGH);
}
if (SelectColor=="All"){
  digitalWrite(gpin,LOW);
  digitalWrite(rpin,LOW);
  digitalWrite(ypin,LOW);
  delay(DT);
  for(i=1;i<=5;i=i+1){
  digitalWrite(gpin,HIGH);
  delay(DT);
  digitalWrite(rpin,HIGH);
  delay(DT);
  digitalWrite(ypin,HIGH);
  delay(DT);
  digitalWrite(gpin,LOW);
  delay(DT);
  digitalWrite(rpin,LOW);
  delay(DT);
  digitalWrite(ypin,LOW);
  delay(DT);
  }
}
}