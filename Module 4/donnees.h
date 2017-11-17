#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Value Value;
struct Value
{
    int currentTime;
    int heartbeat;
};

FILE* openFile();

void getSize(FILE* content, int* numberLine);

Value* creatingTab(int* numberLine);

void getValue(Value *tab, FILE* content);
