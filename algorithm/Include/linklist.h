#ifndef __LINK_LIST_H_
#define __LINK_LIST_H_
#include "main.h"

/*
*/
typedef struct _LinkNode
{
    uint32_t data;
    struct _LinkNode *next;
}LinkNode;

/*
*/
LinkNode* link_create(int n);
int link_change(LinkNode *list, int n, int data);
void link_delete(LinkNode *list, int n);
int link_insert(LinkNode *list, int n, int data);


#endif // __LINK_LIST_H_
