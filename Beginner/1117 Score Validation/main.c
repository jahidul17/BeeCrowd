/* 1117	Score Validation */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,sum=0,media,count=0;

    while(1)
    {

        if(count==2)
        {
            break;
        }

        scanf("%lf",&x);
        if(x>=0 && x<=10)
        {
            sum=sum+x;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }

    }
    media=sum/2;
    printf("media = %.2lf\n",media);


    return 0;
}
