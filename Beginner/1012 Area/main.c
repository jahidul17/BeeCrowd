#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,area,pi=3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);

    area=(.5*a*c);
    printf("TRIANGULO: %.3lf\n",area);

    area=pi*c*c;
    printf("CIRCULO: %.3lf\n",area);

    area=(((a+b)/2)*c);
    printf("TRAPEZIO: %.3lf\n",area);

    area=b*b;
    printf("QUADRADO: %.3lf\n",area);

    area=a*b;
    printf("RETANGULO: %.3lf\n",area);
    return 0;
}
