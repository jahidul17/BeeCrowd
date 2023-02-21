/* 1060		Positive Numbers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=0;
    float num[5];

    for(i=0;i<6;i++){
        scanf("%f",&num[i]);
    }

    for(i=0;i<6;i++){
            if(num[i]>0){
                count++;
            }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
