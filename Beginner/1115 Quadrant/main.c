/* 1115	Quadrant */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int x,y;
        scanf("%d %d",&x,&y);


        if(x==0 || y==0)
        {
            break;
        }
        else if(x>0 && 0<y)
        {
            printf("primeiro\n");
        }
        else if(x<0 && y>0)
        {
            printf("segundo\n");
        }
        else if(x<0 && y<0)
        {
            printf("terceiro\n");
        }
        else if(x>0 && y<0)
        {
            printf("quarto\n");
        }

    }

    return 0;
}
