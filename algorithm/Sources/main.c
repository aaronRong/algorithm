#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "bubble_sort.h"
#include "recursion.h"
#include "half_search.h"
#include "queue.h"


//#define BUBBLE_SORT_TEST
//#define RECURSION_TEST
//#define HALF_SEARCH_TEST
#define QUEUE_TEST

int main()
{
    printf("Hello world!\n");
#ifdef BUBBLE_SORT_TEST
    uint32_t array[] = {1,2,3,6,5,4,8,7,9};

    printf("bubble test\n");
    printf("origin array:");
    for(uint32_t i = 0; i < sizeof(array)/sizeof(uint32_t); i++)
        printf("%d, ", i, array[i]);
    printf("\n");
    bubble_sort(array, sizeof(array)/sizeof(uint32_t));
    printf("after sort array:");
    for(uint32_t i = 0; i < sizeof(array)/sizeof(uint32_t); i++)
        printf("%d, ", i, array[i]);
    printf("\n");
#endif

#ifdef RECURSION_TEST
    uint32_t num = 10;
    uint32_t ret = 0;

    ret = recursion(num);
    printf("recursion number:%d\n", ret);
#endif // RECURSION_TEST

#ifdef HALF_SEARCH_TEST
    uint32_t array[] = {1, 4, 33, 66};
    uint32_t ret = 0;
    uint32_t search_val = 4;

    printf("origin data:");
    for(uint32_t i = 0; i < sizeof(array)/sizeof(uint32_t); i++)
        printf("%d, ", array[i]);
    printf("\n");
    ret = half_search(array, sizeof(array)/sizeof(uint32_t), search_val);
    printf("half result:%d\n", ret);
#endif // HALF_SEARCH_TEST

#ifdef QUEUE_TEST
    Queue_S queue;
    int data = 0;

    queue_init(&queue);
    for(int i = 0; i < 6; i++)
    {
        if(data = enqueue(&queue, i+10))
            printf("enqueue data:%d\n", data);
        else
            printf("en queue fail\n");
    }

    for(int i = 0; i < 6; i++)
    {
        if(data = dequeue(&queue))
            printf("dequeue data:%d\n", data);
        else
            printf("en queue fail\n");
    }

#endif // QUEUE_TEST

    system("pause");

    return 0;
}
