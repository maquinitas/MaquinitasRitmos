#include <MaquinitasRitmos.h>
#include <200DrumMachinePatterns/rock1.h>

Rock1 ritmo;

void setup() {
  Serial.begin(9600);
  ritmo.setTempo(120.0);
}

void loop() {
  Serial.println(ritmo.getTempo());
}
