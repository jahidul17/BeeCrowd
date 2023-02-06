#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x,rem;
    scanf("%d",&N);

    printf("%d\n",N);

    if(N>0 && N<1000000 )
    {

        x=N/100;
        rem=N%100;
        printf("%d nota(s) de R$ 100,00\n",x);

        x=rem/50;
        rem=rem%50;
        printf("%d nota(s) de R$ 50,00\n",x);

        x=rem/20;
        rem=rem%20;
        printf("%d nota(s) de R$ 20,00\n",x);

        x=rem/10;
        rem=rem%10;
        printf("%d nota(s) de R$ 10,00\n",x);

        x=rem/5;
        rem=rem%5;
        printf("%d nota(s) de R$ 5,00\n",x);

        x=rem/2;
        rem=rem%2;
        printf("%d nota(s) de R$ 2,00\n",x);

        x=rem/1;
        rem=rem%1;
        printf("%d nota(s) de R$ 1,00\n",x);

    }

    return 0;
}
