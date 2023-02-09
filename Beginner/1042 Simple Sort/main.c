#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,j,temp;
    scanf("%d %d %d",&a,&b,&c);
    int num[3]= {a,b,c};

    for(i=0; 2>i; i++)
    {
        for(j=0; 2-i>j; j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }


    for(i=0; 3>i; i++)
    {
        printf("%d\n",num[i]);
    }

    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
