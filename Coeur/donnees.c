#include <stdio.h>
#include <stdlib.h>

#include "donnees.h"

FILE* openFile()
{
    // Pointer on my csv file
    FILE* content = NULL;
    content = fopen("Battements.csv", "r");

    return content;
}

void getSize(FILE* content, int* numberLine)
{
    char test;

    while((test = getc(content)) != EOF)
    {
        if(test == '\n')
        {
            *numberLine = *numberLine+1;
        }
    }
}

Value* creatingTab(int* numberLine)
{
    // Declaration of my dynamic array that will contain the values ??of the csv file
    Value* tab = NULL;
    tab = malloc(*numberLine * sizeof(Value));

    return tab;
}

void getValue(Value *tab, FILE* content)
{
    // Value to test our location in the file
    char test;

    // Incrementing variable
    int i = 1;

    // We replace the cursor at the beginning of the file to have all the values
    fseek(content, 0, SEEK_SET);

    // We recover the values ??of the file in the format (X ; X)
    fscanf(content, "%ld;%d", &tab[0].currentTime, &tab[0].heartbeat);
    while((test = getc(content)) != EOF)
    {
        if(test == '\n')
        {
            fscanf(content, "%ld;%d", &tab[i].currentTime, &tab[i].heartbeat);
            i++;
        }
    }
    fclose(content);
}
