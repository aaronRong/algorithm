/*
* Attention: half search needs source data to be sorted at first.
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "half_search.h"

/* */
uint32_t half_search(uint32_t array[], uint32_t size, uint32_t search_val)
{
    uint32_t start = 0;
    uint32_t mid = size/2;
    uint32_t end = size;
    uint32_t count = 0;

    while(start <= end)
    {
        count++;
        if(array[mid] == search_val)
            return count;
        if(array[mid] > search_val)
        {
            end = mid - 1;
        }
        else if(array[mid] < search_val)
        {
            start = mid + 1;
        }

        mid = (start+end)/2;
    }

    printf("fail\n");
}
