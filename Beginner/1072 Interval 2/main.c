/* 1072		Interval 2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x[10000],count1=0,count2=0;
    scanf("%d",&n);

    if(n<10000)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&x[i]);
        }

        for(i=0; i<n; i++)
        {

            if(x[i]>=10 && x[i]<=20)
            {
                count1++;
            }
            if(x[i]<10 || x[i]>20)
            {
                count2++;
            }
        }
        printf("%d in\n",count1);
        printf("%d out\n",count2);

    }



    return 0;
}
