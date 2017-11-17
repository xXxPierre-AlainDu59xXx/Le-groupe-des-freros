#include "Arduino.h"
#include "cardio.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  calculPulsation ();
  pouls = pouls * 10; // On multiplie la valeur de "pouls" par 10 pour avoir un résultat sur 60 secondes au lieu de 6
  Serial.println(pouls); // On affiche "pouls" dans la console (toutes les 6 secondes)
  pouls = 0;
  }
}


