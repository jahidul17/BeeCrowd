/* 1072		Interval 2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x[10000],y[10000],count1=0,count2=0;
    scanf("%d",&n);

    if(n<10000)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&x[i]);
        }

        for(i=0; i<n; i++)
        {
            y[i]=x[i];
            if(y[i]>=10 && y[i]<=20)
            {
                count1++;
                printf("%d\n",y[i]);
            }
            if(y[i]<10 || y[i]>20)
            {
                count2++;
                printf("%d\n",y[i]);

            }
        }
        printf("%d in\n",count1);
        printf("%d out\n",count2);

    }



    return 0;
}
