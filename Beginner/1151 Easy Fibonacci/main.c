/* 1151		Easy Fibonacci */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fibo,fibo_1,fibo_2;
    scanf("%d",&n);

    fibo_1=0;
    fibo_2=1;
    printf("%d ",fibo_1);
    printf("%d",fibo_2);

    for(i=2;i<n;i++){
        fibo=fibo_1+fibo_2;
         printf(" %d",fibo);

        fibo_1=fibo_2;
        fibo_2=fibo;

    }
    printf("\n");

    return 0;
}
