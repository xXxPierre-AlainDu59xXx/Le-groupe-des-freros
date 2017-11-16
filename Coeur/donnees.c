#include <stdio.h>
#include <stdlib.h>

#include "donnees.h"

FILE* openFile()
{
    // Pointer on my csv file
    FILE* content = NULL;
    content = fopen("info.csv", "r");

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
