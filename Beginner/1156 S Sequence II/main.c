#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,j,sum=0,initial=2,mul=1;

    for(i=1,j=1; i<=39; i+=2,j++)
    {


        if(j==1)
        {
            initial=1;
        }

        //for divisor value
        mul=mul*initial;

        if(initial==1)
        {
            initial=2;
        }

        // Series summation
        sum=sum+(i/mul);

    }

    printf("%.2lf\n",sum);

    return 0;
}
