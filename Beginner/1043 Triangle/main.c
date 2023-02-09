#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,perimetro,area_trapezium;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){
        perimetro=a+b+c;
        printf("Perimetro = %.1lf\n",perimetro);
    }
    else{
        area_trapezium=((a+b)/2)*c;
        printf("Area = %.1lf\n",area_trapezium);
    }

    return 0;
}
