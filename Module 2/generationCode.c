#include "generationCode.h"
#include <stdio.h>
#include <stdlib.h>

int ouvrirFichier(int f)
{
    f = fopen("coeur/param.h", "w+");
    printf("fichier ouvert\n");
    return f;
}

void ecrireFichier(f,DEBUT,FIN)
{
    fprintf(f,"#define param.h\nconst int DEBUT=%d;\nconst int FIN=%d;\n",DEBUT,FIN);
}
