/* 1074		Even or Odd */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num[10000];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);

    }

    for(i=0; i<n; i++)
    {

        if(num[i]<0)
        {
            if((num[i]%2)==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if(num[i]>0){
            if((num[i]%2)==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else{
            printf("NULL\n");
        }

    }




    return 0;
}
