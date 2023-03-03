/* 1079		Weighted Averages */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=0,i,n;
    scanf("%d",&n);


    double num[3],result[10],weighted[3]= {2,3,5};

    while(j<n)
    {
        double sum=0;

        for(i=0; i<3; i++)
        {
            scanf("%lf",&num[i]);
        }

        for(i=0; i<3; i++)
        {
            sum+=num[i]*weighted[i];

        }
        for(i=j; i<n; i++)
        {
            result[i]=sum/10;
        }


        j++;
    }



    for(i=0; i<n; i++)
    {
        printf("%.1lf\n",result[i]);
    }


    return 0;
}
