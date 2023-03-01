/* 1078		Multiplication Table */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,mul;
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        mul=i*num;
        printf("%d x %d = %d\n",i,num,mul);
    }

    return 0;
}
