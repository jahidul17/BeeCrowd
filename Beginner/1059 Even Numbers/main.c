/* 1059		Even Numbers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=2; i<=100; i++)
    {

        if((i%2)==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
