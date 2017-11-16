#include <stdio.h>
#include <stdlib.h>

#include "menu.h"

void menuSort(int menuSortChoice)
{
    int *menuChoice;
    printf("Please choose a menu:\n1-Raw data display\n2-Organized data display\n3-Moment specific data search\n4-Time range specific data search\n5-Number of stored lines\n6-Highest and lowest pulse values\n");
    // Menu choice
    scanf("%d",&menuChoice);
    if (menuChoice==2)
    {
        int menuSortChoice;
        printf("Please choose a command:\n1-Growing data display time-wise\n2-Growing data display value-wise\n3-Descending data display time-wise\4-Descending data display value-wise");
        // Secondary menu choice
        scanf("%d",&menuSortChoice);
    }
}
