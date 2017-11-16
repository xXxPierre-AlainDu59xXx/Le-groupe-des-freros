#include <stdio.h>
#include <stdlib.h>

void ouvrirFichier(int *f)
{
    f=fopen("Battements.csv","r");
}

void fermerFichier(int *f)
{
    fclose(f);
}

void lireFichier(int *f)
{
    fclose(f);
}
