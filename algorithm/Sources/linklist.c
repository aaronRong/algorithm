#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

/*
*/
LinkNode* link_create(int n)
{
    LinkNode *head, *node, *end;

    head = (LinkNode*)malloc(sizeof(LinkNode));
    head->data = 0;
    end = head;

    for(int i = 0; i < n; i++)
    {
        node = (LinkNode*)malloc(sizeof(LinkNode));
        node->data = i+1;
        end->next = node;
        end = node;
    }

    end->next = NULL;

    return head;
}

/*
*/
int link_change(LinkNode *list, int n, int data)
{
    LinkNode *node = list;
    int i = 0;

    while((i++ < n) && (list->next != NULL))
        node = node->next;

    if(node != NULL)
        node->data = data;
    else
        return -1;
}

/*
*/
void link_delete(LinkNode *list, int n)
{
    LinkNode *node = list, *pre;
    int i = 0;

    while((i++ < n) && (list->next != NULL))
    {
        pre = node;
        node = node->next;
    }

    if(node->next != NULL)
        pre->next = node->next;
    else
        return -1;
}

/*
*/
int link_insert(LinkNode *list, int n, int data)
{
    LinkNode *node = list, *pre, *newNode;
    int i = 0;

    while((i++ < n) && (list->next != NULL))
    {
        pre = node;
        node = node->next;
    }

    if(node->next != NULL)
    {
        newNode = (LinkNode*)malloc(sizeof(LinkNode));
        newNode->data = data;
        pre->next = newNode;
        newNode->next = node;
    }
    else
        return -1;
}

/*
*/
void print_linklist(LinkNode *list)
{
    LinkNode *node = list;

    while(node->next != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }

    printf("\n");
}

