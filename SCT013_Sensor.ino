// Program used to calculate the eletric's current using the SCT013 Sensor //

#include <EmonLib.h>

EnergyMonitor SCT013;

int pinSCT = A5;   // Analog pint connected to SCT-013 sensor

void setup() {
  SCT013.current(pinSCT, 6.0606);

  Serial.begin(9600);
}

void loop() {
  double Irms = SCT013.calcIrms(1480);   // Calculate the eletric current's value
  
  Serial.print("Corrente = ");
  Serial.print(Irms);
  Serial.println(" A");
  Serial.println();
  delay(1000);

}
