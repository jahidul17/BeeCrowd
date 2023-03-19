/*1080	Highest and Position*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largest,element[100],i;


    for(i=0; i<100; i++)
    {
        scanf("%d",&element[i]);
    }

    largest=element[0];

    for(i=1; i<100; i++)
    {
        if(element[i]>largest)
        {
            largest=element[i];

        }

    }

    printf("%d\n",largest);

    for(i=0; i<100; i++)
    {
        if(element[i]==largest)
        {
            printf("%d\n",i+1);
        }
    }

    return 0;
}
