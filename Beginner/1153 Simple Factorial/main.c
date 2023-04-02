/* 1153	Simple Factorial */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact=1;
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("%d\n",fact);

    return 0;
}
