/*Declaracion e inicializacin de una variable global llamada "mivariable" */

int mivariable=555;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(mivariable);
  mivariable=mivariable+1;
}
