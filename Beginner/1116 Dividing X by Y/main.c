/* 1116	Dividing X by Y */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x,y;
    float result;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&x,&y);

        if(y==0)
        {
            printf("divisao impossivel\n");
        }

        else
        {
            result=(float)x/y;
            printf("%.1lf\n",result);
        }

    }

    return 0;
}
