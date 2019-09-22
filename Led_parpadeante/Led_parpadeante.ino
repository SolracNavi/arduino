// Pagina 296

void setup(){
  //Inicializamos el pin digital 4 como salida.
  //Es donde ira conectado nuestro led.
  pinMode(4, OUTPUT);
}
void loop(){
  digitalWrite(4,HIGH); //Decimos que se encienda el LED
  delay(1000);          //Esperamos un segundo
  digitalWrite(4,LOW);  //Decimos que se apague el led.
  delay(1000);          //Esperamos un segundo
}
