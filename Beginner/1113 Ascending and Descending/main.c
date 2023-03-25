/* 1113	Ascending and Descending */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    while(1)
    {
        scanf("%d %d",&x,&y);

        if(x==y){
            break;
        }

        if(x>y)
        {
            printf("Decrescente\n");
        }

        if(x<y)
        {
            printf("Crescente\n");
        }
    }


    return 0;
}
