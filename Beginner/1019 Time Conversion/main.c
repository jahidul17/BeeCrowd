#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,unit[2]={3600,60},time[2];


    scanf("%d",&num);

    for(i=0;i<2;i++){
        time[i]=num/unit[i];
        num=num%unit[i];
        printf("%d:",time[i]);
    }
    printf("%d\n",num);

    return 0;
}
