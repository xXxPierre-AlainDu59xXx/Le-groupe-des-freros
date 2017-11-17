#include <stdio.h>
#include <stdlib.h>

#define TIME 0
#define VALUE 1

#define DESCENDING 0
#define GROWING 1

#define TRUE 1
#define FALSE 0

#include "actions.h"
#include "menu.h"

void treatment(Value *tab, int *menuChoice, int *numberLine)
{
    // Param variable
    int valueSort, menuSortChoice;
    long val1, val2;
    menuSort(menuSortChoice);

    // choice treatment
    switch(*menuChoice)
    {
        case 1 :
            // Displaying tab data
            display(tab, *numberLine);

            // We pause the system
            system("PAUSE");
            break;

        case 2 :
            menuSort(&menuSortChoice);
            switch(menuSortChoice)
            {
                case 1:
                    //Function call with the necessary arguments
                    valueSort = TIME;
                    sortInsertion(tab, *numberLine, valueSort, GROWING);

                    // Displaying tab data
                    display(tab, *numberLine);
                    printf("\n");
                    break;

                case 2:
                    //Function call with the necessary arguments
                    valueSort = VALUE;
                    sortInsertion(tab, *numberLine, valueSort, GROWING);

                    // Displaying tab data
                    display(tab, *numberLine);
                    printf("\n");
                    break;

                case 3:
                    //Function call with the necessary arguments
                    valueSort = TIME;
                    sortInsertion(tab, *numberLine, valueSort, DESCENDING);

                    // Displaying tab data
                    display(tab, *numberLine);
                    printf("\n");
                    break;

                case 4:
                    //Function call with the necessary arguments
                    valueSort = VALUE;
                    sortInsertion(tab, *numberLine, valueSort, DESCENDING);

                    // Displaying tab data
                    display(tab, *numberLine);
                    printf("\n");
                    break;

                default:
                    printf("ERROR : Menu choice should between 1 and 4.\n");
                    exit(1);
                    break;
            }
            system("PAUSE");
            break;

            // Function call with the necessary arguments
            valueSort = VALUE;
            sortInsertion(tab, *numberLine, valueSort, GROWING);

            // Displaying tab data
            display(tab, *numberLine);
            printf("\n");

            // Function call with the necessary arguments
            sortInsertion(tab, *numberLine, valueSort, DESCENDING);

            // Displaying tab data
            display(tab, *numberLine);

            // We pause the system
            system("PAUSE");
            break;

        case 3 :
            printf("Enter a time value: ");
            scanf("%ld", &val1);

            // Function call with the necessary arguments
            valueSort = TIME;
            sortInsertion(tab, *numberLine, valueSort, GROWING);

            // Function call with the necessary arguments
            dichoSearch(tab, *numberLine, val1);

            // We pause the system
            system("PAUSE");
            break;

        case 4 :
            printf("Enter a starting value: ");
            scanf("%ld", &val1);
            printf("Enter an ending value: ");
            scanf("%ld", &val2);
            valueSort = TIME;
            sortInsertion(tab, *numberLine, valueSort, GROWING);
            average(tab, *numberLine, val1, val2);

            // We pause the system
            system("PAUSE");
            break;

        case 5 :
            printf("Number of stored lines: %d\n", *numberLine);

            // We pause the system
            system("PAUSE");
            break;

        case 6 :
            // Function call with the necessary arguments
            valueSort = VALUE;
            sortInsertion(tab, *numberLine, valueSort, GROWING);

            printf("The maximum pulse value is %d at the time of %ld milliseconds\n", tab[0].heartbeat, tab[0].currentTime);
            printf("The minimum pulse value is %d at the time of %ld milliseconds\n", tab[*numberLine-1].heartbeat, tab[*numberLine-1].currentTime);

            // We pause the system
            system("PAUSE");
            break;

        default :
            printf("End of execution\n");
            exit(0);
            break;

        // We finished using the table tab so we free the memory space
        free(tab);
    }
}

void display(Value *tab, int numberLine)
{
    int i;

    // For each box of the table we display its contents
    for(i=0;i<numberLine;i++)
    {
        printf("At this many milliseconds: %ld, the pulse is: %d\n", tab[i].currentTime, tab[i].heartbeat);
    }
}

void sortInsertion(Value *tab, int numberLine, int valueSort, int typeSort)
{
    int i, j;
    Value elem;

    // Sort by insert that sorts according to the data type and increases or decreases
    for (i = 1; i < numberLine; ++i)
    {
        elem.currentTime = tab[i].currentTime;
        elem.heartbeat = tab[i].heartbeat;

        if(typeSort == GROWING)
        {
            if(valueSort == TIME)
            {
                for (j = i; j > 0 && tab[j-1].currentTime > elem.currentTime; j--)
                {
                    tab[j].currentTime = tab[j-1].currentTime;
                    tab[j].heartbeat = tab[j-1].heartbeat;
                }

                tab[j].currentTime = elem.currentTime;
                tab[j].heartbeat = elem.heartbeat;
            }
            else if(valueSort == VALUE)
            {
                for (j = i; j > 0 && tab[j-1].heartbeat > elem.heartbeat; j--)
                {
                    tab[j].heartbeat = tab[j-1].heartbeat;
                    tab[j].currentTime = tab[j-1].currentTime;
                }

                tab[j].heartbeat = elem.heartbeat;
                tab[j].currentTime = elem.currentTime;
            }
            else
            {
                printf("ERROR : valueSort should be VALUE or TIME.\n");
                exit(1);
            }
        }
        else if(typeSort == DESCENDING)
        {
            if(valueSort == TIME)
            {
                for (j = i; j > 0 && tab[j-1].currentTime < elem.currentTime; j--)
                {
                    tab[j].currentTime = tab[j-1].currentTime;
                    tab[j].heartbeat = tab[j-1].heartbeat;
                }

                tab[j].currentTime = elem.currentTime;
                tab[j].heartbeat = elem.heartbeat;
            }
            else if(valueSort == VALUE)
            {
                for (j = i; j > 0 && tab[j-1].heartbeat < elem.heartbeat; j--)
                {
                    tab[j].heartbeat = tab[j-1].heartbeat;
                    tab[j].currentTime = tab[j-1].currentTime;
                }

                tab[j].heartbeat = elem.heartbeat;
                tab[j].currentTime = elem.currentTime;
            }
            else
            {
                printf("ERROR : valueSort should be VALUE or TIME.\n");
                exit(1);
            }
        }
        else
        {
            printf("ERROR : typeSort should be GROWING or DESCENDING.\n");
            exit(1);
        }
   }
}

int dichoSearch(Value *tab, int numberLine, long val)
{
    // Is wrong until the value "val" is found
    int trouve;
    // Start index
    int id;
    // End index
    int ifin;
    // "middle" index
    int im;

    // Initializing these variables before the search loop
    // The value has not been found yet
    trouve = FALSE;
    // Search interval between 0 ...
    id = 0;
    //...and nbVal
    ifin = numberLine;

    // Search loop
    while(!trouve && ((ifin - id) > 1))
    {
        // The average index is determined
        im = (id + ifin)/2;
        // We look if the value sought is at this index
        trouve = (tab[im].currentTime == val);

        if(tab[im].currentTime > val)
        {
            /* if the value in the "im" box is greater
             * than the desired value, the ending index
             * "ifin" << becomes >> the middle index, so
             * the search interval is restricted at the next loop tower
             */
            ifin = im;
        }
        else
        {
            // Else the beginning index << becomes >> the middle index and the interval is similarly restricted
            id = im;
        }
    }

    // Test conditioning the value that the function will return
    if(tab[id].currentTime == val)
    {
        // If we found the right value, we return the index
        printf("At this many milliseconds: %ld, the pulse is: %d\n", tab[id].currentTime, tab[id].heartbeat);
    }
    else
    {
        // Display result
        printf("There is no value associated with the time");
    }

    // Return location of the value in the array
    return id;
}

void average(Value *tab, int numberLine, long val1, long val2)
{
    int i , j, k, l = 0;
    double moy;
    i = dichoSearch(tab, numberLine, val1);
    j = dichoSearch(tab, numberLine, val2);

    // Calculation of the average heartbeat
    for(k=i;k<j;k++)
    {
        moy = moy + tab[k].heartbeat;
        l++;
    }

    printf("The average pulse is: %lf\n", moy/l);
}
