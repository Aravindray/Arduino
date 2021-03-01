int num;
String msg="Enter Your Number";
String msg1="Your Number is:";

void setup() {
Serial.begin(9600);
}
void loop() {
Serial.println(msg);
while(Serial.available()==0) {

}
num=Serial.parseInt();
Serial.print(msg1);
Serial.println(num);
}