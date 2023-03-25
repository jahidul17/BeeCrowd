/*1099	Sum of Consecutive Odd Numbers II */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;

    int X,Y,temp;

    scanf("%d",&N);

    while(1)
    {

        if(N==0)
            break;

        scanf("%d %d",&X,&Y);

        if(X>Y)
        {
            temp=X;
            X=Y;
            Y=temp;
        }

        int sum=0;

        for( i=X+1; i<Y; i++)
        {


            if((i%2)!= 0)
            {
                sum=sum+i;
            }

        }
        printf("%d\n",sum);

        N--;
    }
    return 0;
}
