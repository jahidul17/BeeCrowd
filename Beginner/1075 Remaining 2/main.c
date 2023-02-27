/* 1075		Remaining 2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;
    scanf("%d",&num);

    for(i=1; i<=10000; i++)
    {
        if((i%num)==2)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
