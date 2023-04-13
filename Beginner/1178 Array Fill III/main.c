/* 1178		Array Fill III */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    int i;
    scanf("%lf",&x);

    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,x);
        x=x/2;

    }

    return 0;
}
