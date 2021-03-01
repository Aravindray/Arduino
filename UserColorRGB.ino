int redpin=9;
int greenpin=6;
int bluepin=3;
int firstColor;
int secondColor;
int thirdColor;

void setup() {
    pinMode(redpin,OUTPUT);
    pinMode(greenpin,OUTPUT);
    pinMode(bluepin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println("Enter Your First Color Code");
    while(Serial.available()==0){

    }
    firstColor=Serial.parseInt();
    Serial.println(firstColor);
    Serial.println("Enter Your Second Color Code");
    while(Serial.available()==0){

    }
    secondColor=Serial.parseInt();
    Serial.println(secondColor);
    Serial.println("Enter Your Third Color Code");
    while(Serial.available()==0){

    }
    thirdColor=Serial.parseInt();
    Serial.println(thirdColor);

    analogWrite(redpin,firstColor);
    analogWrite(greenpin,secondColor);
    analogWrite(bluepin,thirdColor);
}

// Use the link below for more color
/* https://www.rapidtables.com/web/color/RGB_Color.html#:~:text=RGB%20color%20space%20or%20RGB%20color%20system%2C%20constructs,256%2A256%2A256%3D16777216%20possible%20colors.%20RGB%20%E2%89%A1%20Red%2C%20Green%2C%20Blue */