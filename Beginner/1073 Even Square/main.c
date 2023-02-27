/* 1073		Even Square */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,square,num;
    scanf("%d",&num);

    for(i=2;i<=num;i++){
        if((i%2)==0){
            square=pow(i,2);
            printf("%d^2 = %d\n",i,square);
        }
    }

    return 0;
}
