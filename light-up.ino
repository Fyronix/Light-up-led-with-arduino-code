int axey = A1;   // Reference input for Y axis
int axex = A0;   // Reference input for X axis.
int ledup = 12;   // Upper led.
int ledD = 13;    // Lower led.
int ledL = 10;    // Left led.
int ledR = 11;    // Led right.
int valeurX;
int valeurY;

void setup() {  
  Serial.begin(9600);
  / * Definition of leds
  as outputs * /
  pinMode(ledup, OUTPUT);
  pinMode(ledD, OUTPUT); 
  pinMode(ledL, OUTPUT); 
  pinMode(ledR, OUTPUT); 
}
 
void loop() {  
  valeurX = analogRead(axex);
  if (valeurX > 700){ 
    digitalWrite(ledR,HIGH);
    Serial.print("x = ");
    Serial.println(valeurX);
  }else{
    digitalWrite(ledR, LOW );
  }
  
  valeurX = analogRead(axex);
  if (valeurX < 400){  
    digitalWrite(ledL,HIGH);
    Serial.print("x = ");
    Serial.println(valeurX);
  }else{
    digitalWrite(ledL, LOW );
  }
  
  valeurY = analogRead(axey);
  if (valeurY > 700){  
    digitalWrite(ledup,HIGH);
    Serial.print("y = ");
    Serial.println(valeurY);
  }else{
    digitalWrite(ledup, LOW );
  }
 
  valeurY = analogRead(axey);
  if (valeurY < 400){  
    digitalWrite(ledD,HIGH);
    Serial.print("y = ");
    Serial.println(valeurY);
  }else{
    digitalWrite(ledD, LOW );
  }
}