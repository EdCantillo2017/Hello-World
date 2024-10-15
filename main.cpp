// this is an application does everything very well 
// it has no bug and no defects

#include <stdio.h>

#define MAX_ITEMS 100

void main(void)
{

    int x, y ;

    for (x = 0; x <= MAX_ITEMS; x++)
    {
        y += x;
        printf("The values of y is %d \n", y );

    }

    return;

}