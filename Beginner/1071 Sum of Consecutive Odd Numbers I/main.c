/* 1071		Sum of Consecutive Odd Numbers I */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum;
    scanf("%d %d",&x,&y);

    sum=abs(x)+abs(y);


    if(x!=y){
        printf("%d\n",sum/2);
    }
    else{
        printf("0\n");
    }
    return 0;
}
