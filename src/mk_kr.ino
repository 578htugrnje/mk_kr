
int RED_pin=9;
int POWER_pin=10;
int GREEN_pin=11;
int BLUE_pin=12;

void setup() {
    pinMode(RED_pin, OUTPUT);
    pinMode(POWER_pin, OUTPUT);
    pinMode(GREEN_pin, OUTPUT);
    pinMode(BLUE_pin, OUTPUT);
}

void  loop()  { 
   for (int z=0; z<3; z++) {
    digitalWrite(POWER_pin, HIGH);
    digitalWrite(RED_pin, LOW);
    digitalWrite(BLUE_pin, LOW);
    digitalWrite(GREEN_pin, LOW);
    delay(200);       
    digitalWrite(POWER_pin, LOW);
    delay(250);
   }
   delay(300);
   for (int z=0; z<3; z++) {
    digitalWrite(POWER_pin, HIGH);
    digitalWrite(RED_pin, LOW);
    digitalWrite(BLUE_pin, LOW);
    digitalWrite(GREEN_pin, LOW);
    delay(800);
    digitalWrite(POWER_pin, LOW);
    delay(250);
   }
   delay(300);
   for (int z=0; z<3; z++) {
   digitalWrite(POWER_pin, HIGH);
   digitalWrite(RED_pin, LOW);
    digitalWrite(BLUE_pin, LOW);
    digitalWrite(GREEN_pin, LOW);
    delay(200);
    digitalWrite(POWER_pin, LOW);
    delay(250);
   }
  delay(5000);
}
