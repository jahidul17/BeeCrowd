/* 1070	Six Odd Numbers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    scanf("%d",&num);

    for(i=0; i<12; i++)
    {
        if((num%2)!=0)
        {
            printf("%d\n",num);
        }
        num++;
    }


    return 0;
}
