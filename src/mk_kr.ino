
#include <Arduino.h>

int RED_pin=9;       // Номера выводов,
int POWER_pin=10;    // на которых находится диод
int GREEN_pin=11;    
int BLUE_pin=12;

int period=200;      // Время длительности символа "точки"

void setup() {
    pinMode(RED_pin, OUTPUT);       //Установливаем выводы
    pinMode(POWER_pin, OUTPUT);     //светодиода на выход
    pinMode(GREEN_pin, OUTPUT);
    pinMode(BLUE_pin, OUTPUT);
    Serial.begin(115200);
}

void  loop()  { 
   // Символ "точка"
   for (int z=0; z<3; z++) {         //Цикл выполняется три раза
    digitalWrite(POWER_pin, HIGH);   //Чтобы светодиод загорелся,
    digitalWrite(RED_pin, LOW);      //на аноде(VCC-общий анод) должнен быть
    digitalWrite(BLUE_pin, LOW);     //высокий уровень напряжения, а на катоде
    digitalWrite(GREEN_pin, LOW);    //(RED, GREEN, BLUE) - низкий уровень.
    delay(period);                   //Светодиод горит 200 милисекунд
    digitalWrite(POWER_pin, LOW);    //После того, как подается низкое напряжение на анод, диод перестает гореть
    delay(period);                   //После 200 милисекунд цикл повторяется
   }
   delay(300);
   // Символ "тире"
   for (int z=0; z<3; z++) {
    digitalWrite(POWER_pin, HIGH);   //Аналогично символу "точка",
    digitalWrite(RED_pin, LOW);      //только теперь светодиод будет гореть 
    digitalWrite(BLUE_pin, LOW);     //600 милисекунд
    digitalWrite(GREEN_pin, LOW);
    delay(3*period);
    digitalWrite(POWER_pin, LOW);
    delay(period);
   }
   delay(300);
   // Символ "точка"
   for (int z=0; z<3; z++) {
    digitalWrite(POWER_pin, HIGH);    //Аналогично символу "точка"
    digitalWrite(RED_pin, LOW);
    digitalWrite(BLUE_pin, LOW);
    digitalWrite(GREEN_pin, LOW);
    delay(period);
    digitalWrite(POWER_pin, LOW);
    delay(period);
   }
  delay(5000);                      //После 5000 милисекунд снова будет передаваться сигнал "SOS"
}
