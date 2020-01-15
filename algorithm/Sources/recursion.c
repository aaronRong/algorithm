#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

/*
*
*/
uint32_t recursion(uint32_t number)
{
    if(number == 0)
        return 0;
    if((number == 1) || (number == 2))
       return 1;

    return recursion(number-1)+recursion(number-2);
}

