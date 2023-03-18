/* 1079		Weighted Averages */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double a,b,c,result;

    scanf("%i",&n);

    for(int i=0;i<n;i++){
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);

        result=((a/10)*2)+((b/10)*3)+((c/10)*5);

        printf("%.1f\n",result);
    }


    return 0;
}
