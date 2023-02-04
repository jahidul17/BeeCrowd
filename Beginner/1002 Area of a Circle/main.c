#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R,A,pi=3.14159;
    printf("Enter radius:");
    scanf("%lf",&R);
    A=pi*(R*R);
    printf("A=%.4lf\n",A);
    return 0;
}
