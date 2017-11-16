#include "menu.h"
void menu()
{
    int choix,DEBUT,FIN;
    printf("MENU:\nVeuillez choisir votre mode d'allumage de LED:\n1->Un Sur Deux;\n2->Un Sur Trois;\n3->Chenille;\n4->Chaine; ");
    scanf("%d",choix);
    return choix;
    switch (choix)
    {
        case 1:
            ecrireFichier(fichier,0,9)
            break;
        case 2:
            ecrireFichier(fichier,10,19)
            break;
        case 3:
            ecrireFichier(fichier,20,29)
            break;
        case 4:
           ecrireFichier(fichier,30,54)
            break;
        default:
            break;
    }
}
