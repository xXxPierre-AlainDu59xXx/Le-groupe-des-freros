#include "menu.h"
int menu(int f)
{
    f = ouvrirFichier(f);
    int choix,DEBUT,FIN;
    printf("MENU:\nVeuillez sélectionner votre action:\n1->Allumage de LED;\n2->Test de LED;\n ");
    scanf("%d",&choix);
    if (choix==1)
    {
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
    else if (choix==2)
    {
        printf("MENU:\nVeuillez choisir la LED à tester:\n1->LED 1;\n2->LED 2;\n3->LED 3;\n4->LED 4;\5->LED 5;\n6->LED 6;\n7->LED 7;\n8->LED 8;\n9->LED 9;\n10->LED 10;\n ");
        scanf("%d",&choix);
        switch (choix)
        {
            case 1:
                ecrireFichier(f,20,20);
                break;
            case 2:
                ecrireFichier(f,21,21);
                break;
            case 3:
                ecrireFichier(f,22,22);
                break;
            case 4:
                ecrireFichier(f,23,23);
                break;
            case 5:
                ecrireFichier(f,24,24);
                break;
            case 6:
                ecrireFichier(f,25,25);
                break;
            case 7:
                ecrireFichier(f,26,26);
                break;
            case 8:
                ecrireFichier(f,27,27);
                break;
            case 9:
                ecrireFichier(f,28,28);
                break;
            case 10:
                ecrireFichier(f,29,29);
                break;
            default:
                break;
        }
    }
}

