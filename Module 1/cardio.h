#include "Arduino.h" 
#define cardio.h 

int valeurActuelle, valeurSeuil;
long tempsDetection;

void calculPulsation(int valeurActuelle, int valeurSeuil, long tempsDetection);
