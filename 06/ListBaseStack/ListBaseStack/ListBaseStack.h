//
//  ListBaseStack.h
//  ListBaseStack
//
//  Created by Youngwan Cho on 2018. 6. 16..
//  Copyright © 2018년 developer119. All rights reserved.
//

#ifndef __LB_STACK_H__
#define __LB_STACK_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node* next;
} Node;


typedef struct _listStack
{
    Node* head;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack* stack);
int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);

#endif /* __LB_STACK_H__ */
