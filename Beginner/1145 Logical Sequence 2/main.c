/* 1145		Logical Sequence 2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp,x,y;
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }

    for(i=1; i<=y; i++)
    {

        if(i%x != 0)
        {
            printf("%d ",i);
        }

        if(i%x == 0)
        {
            printf("%d",i);
            printf("\n");
        }
    }

    return 0;
}
