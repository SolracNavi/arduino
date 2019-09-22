int estadoLed = LOW; //Variable para cambiar el estado del LED
long t1 = 0; //Guarda el ultimo momento cuando el LED cambio.
long t2 = 0; //Guarda el instante actual de ejecucion.
long intervalo = 1000; //Intervalo de tiempo para el parpadeo.
void setup(){
  pinMode(4,OUTPUT);
}
void loop(){
  /*Aqui viene el cdigo que se desea ejecutar todo el tiempo
  (lectura de sensores, control de actuadores, etc.)*/
  
  /*Ahora se pasa a comprobar si ha de cambiar el estado del LED. 
  Esto se hace mirando si la diferencia entre el tiempo actual y la ultima
  vez que el led cambio es mayor que el intervalo que se quiere
  para el parpadeo.*/
  t2=millis();
  if (t2 - t1 > intervalo){
    //Guardo el tiempo del cambio, para la proxima vez
    t1 = t2;
    //Y realizo el cambio de estado.
    if (estadoLed == LOW){
      estadoLed = HIGH;
    } else {
      estadoLed = LOW;
    }
    digitalWrite(4, estadoLed);
  }
}
