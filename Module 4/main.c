#include <stdio.h>
#include <stdlib.h>

#include "actions.h"
#include "menu.h"
#include "donnees.h"

int main(int argc, char *argv[])
{
    int menuChoice=NULL, numberLine=NULL;
    Value *tab = NULL;
    // Makes the menu appear
    treatment(tab, menuChoice, numberLine);
    return 0;
}
