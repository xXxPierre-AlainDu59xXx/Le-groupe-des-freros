#include <stdio.h>
#include <stdlib.h>

#include "generationCode.h"
#include "menu.h"


int main()
{
    FILE *f = NULL;
    menu(f);
    if(f==NULL)
    {
        return 0;
    }
    else
        fclose(f);
    return 0;
}
