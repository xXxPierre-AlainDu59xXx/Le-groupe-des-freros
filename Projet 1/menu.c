#include "menu.h"
int menu(int f)
{
    f = ouvrirFichier(f);
    int choix,DEBUT,FIN;
    printf("MENU:\nVeuillez choisir votre mode d'allumage de LED:\n1->Un Sur Deux;\n2->Un Sur Trois;\n3->Chenille;\n4->Chaine;\n ");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
            ecrireFichier(f,0,9);
            break;
        case 2:
            ecrireFichier(f,10,19);
            break;
        case 3:
            ecrireFichier(f,20,29);
            break;
        case 4:
           ecrireFichier(f,30,54);
            break;
        default:
            break;
    }
}

