int estadoActual1=0;
int estadoActual2=0;
int estadoUltimo=0;
int contador=0;
void setup() {
  pinMode(4, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}
void loop(){
  estadoActual1=digitalRead(8);
  delay(10);
  estadoActual2=digitalRead(8);
  if (estadoActual1 == estadoActual2){
    if (estadoActual1 != estadoUltimo){
      if (estadoActual1 == HIGH){
        contador = contador +1;
        Serial.print("Esta es la pulsacion numero ");
        Serial.println(contador);
      }
    }
  }
  estadoUltimo= estadoActual1;
  if (contador % 2 == 0){
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH);
  }
}
