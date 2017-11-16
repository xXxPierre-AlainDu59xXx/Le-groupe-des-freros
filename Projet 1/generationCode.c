#include "generationCode.h"
#include <stdio.h>
#include <stdlib.h>

void ouvrirFichier()
{
    FILE *f = NULL;
    f = fopen("param.h", "w+");
}

void ecrireFichier(f,DEBUT,FIN)
{
    fprintf("#define param.h\n#include \"Arduino.h\"\nconst int DEBUT=%d;\nconst int FIN=%d;",DEBUT,FIN);
}

void fermerFichier(f)
{
    fclose(f);
}
