#include <stdio.h>
#include <stdlib.h>

int main()
{
    double VOLUME,radius,pi=3.14159;

    scanf("%lf",&radius);

    VOLUME =(4.0/3)*pi*radius*radius*radius;

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}
