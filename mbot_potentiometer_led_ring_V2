
#include "MeAuriga.h"

MePotentiometer myPotentiometer(PORT_6);
MeRGBLed led_ring( 0, 12 );
int r,g,b,pot;

void setup()
{
  Serial.begin(9600);
  led_ring.setpin( 44 );
}

void loop()
{
  pot = myPotentiometer.read();
  if (pot < 326)  
  {                  
    pot = (pot * 3) / 4; 
    
    r = 256 - pot;  
    g = pot;        
    b = 1;
  }
  else if (pot < 652) 
  {
    pot = ( (pot-341) * 3) / 4;

    r = 1;            
    g = 256 - pot; 
    b = pot;       
  }
  else  
  {
    pot = ( (pot-980) * 3) / 4; 

    r = pot;       
    g = 1;            
    b = 256 - pot;
  }
  led_ring.setColor(0, r, g, b);
  led_ring.show();
  delay(100);
}
