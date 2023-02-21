/* 1064		Positives and Average */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=0;
    float num[6],sum=0;


    for(i=0;i<6;i++){
        scanf("%f",&num[i]);
    }

     for(i=0;i<6;i++){
            if(num[i]>0){
                count++;
                sum=sum+num[i];
            }
    }

    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);

    return 0;
}

