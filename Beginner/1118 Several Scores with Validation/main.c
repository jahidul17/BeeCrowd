#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,sum=0,count=0;
    int test;

    while(1){
        while(test==1)
    {

        if(count==2)
        {
            break;
        }
        scanf("%lf",&x);

        if(x>=0 && 10>=x)
        {
            sum=sum+x;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2lf\n",sum/2);

    scanf("%d",&test);


    }do(test==1);

    /*
    //Is continue test

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&test);

    while(test==1){

    }

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&test);
    if(test==1)
    {
        while(1)
        {

            if(count==2)
            {
                break;
            }
            scanf("%lf",&x);

            if(x>=0 && 10>=x)
            {
                sum=sum+x;
                count++;
            }
            else
            {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2lf\n",sum/2);
    }


    else if(test==2)
    {
        break;
    }
*/

    return 0;
}
