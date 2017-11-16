#include <stdio.h>
#include <stdlib.h>

void afficherDonneesFichier()
{
    FILE *f=NULL;
    ouvrirFichier(f);
    lireFichier(f);
    fermerFichier(f);
}

void quitter()
{
    return 0;
}
