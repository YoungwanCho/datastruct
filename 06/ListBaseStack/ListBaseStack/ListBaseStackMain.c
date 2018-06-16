//
//  ListBaseStackMain.c
//  ListBaseStack
//
//  Created by Youngwan Cho on 2018. 6. 16..
//  Copyright © 2018년 developer119. All rights reserved.
//

#include <stdio.h>
#include "ListBaseStack.h"

int main(void)
{
    Stack stack;
    StackInit(&stack);
    
    SPush(&stack, 1);
    SPush(&stack, 2);
    SPush(&stack, 3);
    SPush(&stack, 4);
    SPush(&stack, 5);
    
    while (!SIsEmpty(&stack))
    {
        printf("%d ", SPop(&stack));
    }
    return 0;
}
