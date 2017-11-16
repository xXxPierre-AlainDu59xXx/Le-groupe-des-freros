#include "Arduino.h"
#include "Coeur.h"
#include "Param.h"

int pinLed[10]={1,2,3,4,5,6,7,8,9,10}; // Tableau listant les pins

void setup() {
  for (int i=0;i<10;i++)
  {
    pinMode(pinLed[i],OUTPUT);
    digitalWrite(pinLed[i],LOW);
  }
}

void loop() {
  for (int i=DEBUT;i<=FIN;i++) // boucle de séquence d'affichage
  {
    for (int p=0;p<10;p++) // boucle pour chaque pin
    {
      boolean etat=affichage[i][p]; // on va chercher l'état pour le pin
      digitalWrite(pinLed[p],etat); // on met le pin concerné à l'état
    }
  //tous les pins sont dans l'état de la séquence en cours
  delay(200); //petite pause d'affichage
  // on passe à la séquence suivante
  }
}
