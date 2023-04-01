/* 1142		PUM */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=1;i<=4*n;i++){
        if(i%4 != 0){
            printf("%d ",i);
        }
        if(i%4 == 0){
            printf("PUM\n");
        }
    }

    return 0;
}
