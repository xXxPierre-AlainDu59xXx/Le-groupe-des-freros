#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.h"

void average(Value *tab, int numberLine, long val1, long val2);

int dichoSearch(Value *tab, int numberLine, long val);

void sortInsertion(Value *tab, int numberLine, int valueSort, int typeSort);

void display(Value *tab, int numberLine);

void treatment(Value *tab, int *menuChoice, int *numberLine);

#endif // ACTION_H_INCLUDED
