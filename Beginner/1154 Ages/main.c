/* 1154		Ages */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,count=0;

    while(1)
    {
        scanf("%d",&n);

        if(n<0)
        {
            break;
        }
        else if(n>=0)
        {
            sum=sum+n;
            count++;

        }
    }

    printf("%.2f\n",(float)sum/count);

    return 0;
}
