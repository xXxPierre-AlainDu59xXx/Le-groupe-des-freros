#include <stdio.h>
#include <stdlib.h>

#include "actions.h"
#include "menu.h"
#include "donnees.h"

int main(int argc, char *argv[])
{
    int menuChoice, numberLine;
    Value *tab = NULL;
    treatment(tab, menuChoice, numberLine);
    return 0;
}
