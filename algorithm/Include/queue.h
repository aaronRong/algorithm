#ifndef __QUEUE_H_
#define __QUEUE_H_
#include <stdbool.h>
#include "main.h"

/*
*/
#define MAX_SIZE    (5u)

/*
*/
typedef struct
{
    uint32_t buffer[MAX_SIZE];
    uint32_t rear;
    uint32_t front;
}Queue_S;

/*
*/
void queue_init(Queue_S *queue);
bool isqueue_full(Queue_S *queue);
bool isqueue_empty(Queue_S *queue);
void queue_init(Queue_S *queue);
int enqueue(Queue_S *queue, uint32_t data);
int dequeue(Queue_S *queue);

#endif // __QUEUE_H_
