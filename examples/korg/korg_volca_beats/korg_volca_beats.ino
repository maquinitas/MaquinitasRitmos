#include <MaquinitasRitmos.h>

MaquinitasRitmos ritmo;

void setup() {
  Serial.begin(9600);
  ritmo.setTempo(120.0);
}

void loop() {
  Serial.println(ritmo.getTempo());
}
