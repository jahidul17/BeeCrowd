#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;

    scanf("%lf",&num);

    printf("Exact value: %lf\n",num);

    printf("Integer value: %d\n",(int)num);

    printf("Floating value: %.3lf\n",num-(int)num);


    return 0;
}
