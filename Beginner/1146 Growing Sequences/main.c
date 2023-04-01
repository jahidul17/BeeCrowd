/* 1146		Growing Sequences */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;

    while(1){

        scanf("%d",&x);

        if(x==0){
            break;
        }
        for(i=1;i<=x;i++){
            printf("%d",i);

            if(i != x){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
