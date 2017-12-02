#include "MeAuriga.h"

MePotentiometer myPotentiometer(PORT_6);
MeRGBLed led_ring( 0, 12 );
int mapped;

void setup()
{
  Serial.begin(9600);
  led_ring.setpin( 44 );
}

void loop()
{
  led_ring.setColor(0, 0, 0, 0);
  led_ring.show();
  mapped = map(myPotentiometer.read(), 0, 980, 1, 13);
  led_ring.setColor(mapped, 100, 0, 0);
  led_ring.show();
  delay(100);
}
