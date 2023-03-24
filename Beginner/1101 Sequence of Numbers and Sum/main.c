#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {

        int m,n,sum=0;
        scanf("%d %d",&m,&n);

        if(m <= 0)
            break;
        if(n <= 0)
            break;

        if(m>n)
        {
            m=m+n;
            n=m-n;
            m=m-n;
        }

        for(int i=m; i<=n; i++)
        {
            sum=sum+i;
            printf("%d ",i);
        }

        printf("Sum=%d\n",sum);
    }

    return 0;
}
