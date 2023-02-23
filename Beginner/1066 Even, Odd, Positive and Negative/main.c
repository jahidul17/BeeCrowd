/* 1066		Even, Odd, Positive and Negative */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5],i,even=0,odd=0,positive=0,negative=0;

    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<5;i++){
        if((num[i]%2)==0){
            even++;
        }
        if((num[i]%2)!=0){
            odd++;
        }

         if(num[i]>0){
            positive++;
        }

        if(num[i]<0){
            negative++;
        }

    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);

    return 0;
}
