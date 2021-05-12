void setup() 
{pinMode (A5,INPUT)
 Serial.begin (9600)
 

}

void loop() 
{ 
 int temperatura = -40 + 0.488155 * (analogRead(A0) - 20); //mide la temperatura en grados C°
 
 delay(1000);
 Serial.print( "La temperatura es ");
 Serial.print(temperatura);
 Serial.println(" grados."); 


}
