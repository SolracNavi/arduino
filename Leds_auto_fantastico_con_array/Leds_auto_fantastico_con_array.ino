//Este array tiene los n° de pines donde se conectan los LED
byte leds[]={6,7,8};
byte i=0; //Variable contador para los bucles for
int del=30; //Variable que marca el tiempo en los delay()
void setup() {
  //El bucle recorre los tres elementos del array (0, 1 y 2)
  for (i=0;i<=2;i++) {
    pinMode(leds[i], OUTPUT);
  }
}
void loop() {
  //Parpadean los leds del 6 al 8
  //Atencion a los limites del bucle for
  for (i=0;i<2;i++) {
    digitalWrite (leds[i],HIGH);
    delay(del);
    digitalWrite(leds[i+1], HIGH);
    delay(del);
    digitalWrite (leds[i], LOW);
    delay(del*2);
  }
  //Parpadean los leds del 8 al 6
  //Atencion a los limites del bucle for
  for (i=2;i>0;i--) {
    digitalWrite (leds[i], HIGH);
    delay(del);
    digitalWrite(leds[i-1], HIGH);
    delay(del);
    digitalWrite(leds[i-1], HIGH);
    delay(del);
    digitalWrite (leds[i], LOW);
    delay(del*2);
  }
}
