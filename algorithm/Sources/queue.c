/*
* Attention: this queue cannot full the buffer!!!
*/
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
*/
bool isqueue_full(Queue_S *queue)
{
    if((queue->rear+1) % MAX_SIZE == queue->front)
        return true;

    return false;
}

/*
*/
bool isqueue_empty(Queue_S *queue)
{
    if(queue->rear == queue->front)
        return true;

    return false;
}

/*
*/
void queue_init(Queue_S *queue)
{
    memset(queue->buffer, 0x00, sizeof(queue->buffer));
    queue->rear = 0;
    queue->front = 0;
}
/*
*
*/
int enqueue(Queue_S *queue, uint32_t data)
{
    if(isqueue_full(queue))
        return -1;

    queue->buffer[queue->rear] = data;
    queue->rear = (queue->rear + 1) % MAX_SIZE;

    return data;
}

/*
*
*/
int dequeue(Queue_S *queue)
{
    int data = 0;

    if(isqueue_empty(queue))
        return -1;

    data = queue->buffer[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;

    return data;
}


