#include "cardio.h"
const int SORTIE=0; // La macro pour le pin de sortie

void calculPulsation(int pouls, int battement) {
  for(int temps=0;temps!=600;temps++) { //On teste le programme pendant 6 secondes (en fonction du delay en dessous)
    delay(10); // On teste le programme toutes les 0.01 secondes
    battement=analogRead(SORTIE); // La valeur en sortie est stockée dans "battement" (égal à 0 ou 1)
    if (battement==1) { // Si "battement" = , on incrémente  "pouls"
      pouls++;
    }
  }
}

