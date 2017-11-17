#ifndef Coeur.h
#define Coeur.h
#include "Arduino.h"

boolean affichage[55][10]={
  1,0,0,0,0,0,0,0,0,0, //Debut tableau UnSurDeux (ligne 0)
  0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,1,0,
  0,1,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,1, //Fin tableau UnSurDeux (ligne 9)
  1,0,0,0,0,0,0,0,0,0, //Debut teableau UnSurTrois (ligne 10)
  0,0,0,1,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,1,
  0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,1,0,
  0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0, //Fin tableau UnSurTrois (ligne 19)
  1,0,0,0,0,0,0,0,0,0, //Debut tableau Chenille (ligne 20) ET Test LED 1
  0,1,0,0,0,0,0,0,0,0, //Test LED 2
  0,0,1,0,0,0,0,0,0,0, //Test LED 3
  0,0,0,1,0,0,0,0,0,0, //Test LED 4
  0,0,0,0,1,0,0,0,0,0, //Test LED 5
  0,0,0,0,0,1,0,0,0,0, //Test LED 6
  0,0,0,0,0,0,1,0,0,0, //Test LED 7
  0,0,0,0,0,0,0,1,0,0, //Test LED 8
  0,0,0,0,0,0,0,0,1,0, //Test LED 9
  0,0,0,0,0,0,0,0,0,1, //Fin tableau Chenille (ligne 29) ET Test LED 10
  0,0,0,0,0,0,0,0,0,0, //Debut tableau Chaine (ligne 30)
  1,0,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  1,1,1,0,0,0,0,0,0,0,
  1,1,1,1,0,0,0,0,0,0,
  1,1,1,1,1,0,0,0,0,0,
  1,1,1,1,1,1,0,0,0,0,
  1,1,1,1,1,1,1,0,0,0,
  1,1,1,1,1,1,1,1,0,0,
  1,1,1,1,1,1,1,1,1,0,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  0,1,1,1,1,1,1,1,1,1,
  0,0,1,1,1,1,1,1,1,1,
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,0,1,1,1,1,1,1,
  0,0,0,0,0,1,1,1,1,1,
  0,0,0,0,0,0,1,1,1,1,
  0,0,0,0,0,0,0,1,1,1,
  0,0,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0}; //Fin tableau Chaine (ligne 54)

#endif
