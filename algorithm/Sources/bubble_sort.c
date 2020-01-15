#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

/*
*
*/
void bubble_sort(uint32_t array[], uint32_t size)
{
    uint32_t temp = 0;

    for(uint32_t i = 0; i < size - 1; i++)
    {
        for(uint32_t j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}
