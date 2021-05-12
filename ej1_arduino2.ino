#define LED 3
#define INTERRUPTOR 5

void setup()
{
  pinMode(LED,OUTPUT); //Define el led como una salida
  pinMode (INTERRUPTOR,INPUT); //Define el interruptor como una entrada


}

void loop() 
{ 
  if (digitalWrite(INTERRUPTOR)== HIGH)
  { 
    //parpadea el led cada medio segundo
    digitalWrite (LED, HIGH);
    delay(500);
    digitalWrite (LED, LOW);
    delay(500);
    }
  else 
  { digitalWrite (LED, HIGH);
    delay(1000);
    digitalWrite (LED, LOW);
    delay(1000);
    //parpadea cada 1 segundo
  }
   
  

}
