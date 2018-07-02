#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    List list;
    int data;
    ListInit(&list);
    
    // 1. 리스트를 생성 및 초기화 한다음 정수 1 부터 9까지 리스트에 저장한다.
    int i=0;
    for(i=1; i<=9; i++)
    {
        data = i;
        LInsert(&list, data);
    }
    
    // 2. 리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력한다.
    int totalValue = 0;
    data = 0;
    if(LFirst(&list, &data))
    {
        totalValue += data;
        while (LNext(&list, &data))
        {
            totalValue += data;
        }
    }
    
    printf("Total Value : %d\n", totalValue);
    
    // 3. 리스트에 저장된 값들중 2의 배수와 3의 배수에 해당 되는 값을 모두 삭제 한다.
    if(LFirst(&list, &data))
    {
        if(data % 2 == 0 || data % 3 == 0)
        {
            LRemove(&list);
        }
        
        while (LNext(&list, &data))
        {
            if(data % 2 == 0 || data % 3 == 0)
            {
                LRemove(&list);
            }
        }
    }
    
    // 4. 마지막으로 리스트에 저장된 데이터를 순서대로 출력한다.
    if(LFirst(&list, &data))
    {
        printf("%d\n", data);
        while (LNext(&list, &data))
        {
            printf("%d\n", data);
        }
    }
    
    return 0;
}
