#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "recursion.h"
#include "main.h"

//#define BUBBLE_SORT_TEST
#define RECURSION_TEST

int main()
{
    printf("Hello world!\n");
#ifdef BUBBLE_SORT_TEST
    uint32_t array[] = {1,2,3,6,5,4,8,7,9};

    printf("bubble test\n");
    printf("origin array:");
    for(uint32_t i = 0; i < sizeof(array)/sizeof(uint32_t); i++)
        printf("array[%d]:%d ", i, array[i]);
    printf("\n");
    bubble_sort(array, sizeof(array)/sizeof(uint32_t));
    printf("after sort array:");
    for(uint32_t i = 0; i < sizeof(array)/sizeof(uint32_t); i++)
        printf("array[%d]:%d ", i, array[i]);
    printf("\n");
#endif

#ifdef RECURSION_TEST
    uint32_t num = 10;
    uint32_t ret = 0;

    ret = recursion(num);
    printf("recursion number:%d\n", ret);
#endif // RECURSION_TEST

    system("pause");

    return 0;
}
