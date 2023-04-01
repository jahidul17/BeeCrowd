/* 1134	Type of Fuel */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count_A=0,count_G=0,count_D=0;


    while(1)
    {
        scanf("%d",&x);

        if(x==4)
        {
            break;
        }

        else if(x==1)
        {
            count_A++;

        }

        else if(x==2)
        {
            count_G++;

        }

        else if(x==3)
        {
            count_D++;

        }

    }

    printf("MUITO OBRIGADO\n");

    printf("Alcool: %d\n",count_A);
    printf("Gasolina: %d\n",count_G);
    printf("Diesel: %d\n",count_D);


    return 0;
}
