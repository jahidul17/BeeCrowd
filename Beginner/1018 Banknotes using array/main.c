#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N,rem,money[7];
    scanf("%d",&N);
    printf("%d\n",N);
    int note[7]={100,50,20,10,5,2,1};

    for(i=0;i<7;i++){
        money[i]=N/note[i];
        N=N%note[i];
        //printf("%d nota(s) de R$ %d,00\n",money[i],note[i]);
    }

    for(j=0;j<7;j++){
        printf("%d nota(s) de R$ %d,00\n",money[j],note[j]);
    }


    return 0;
}
