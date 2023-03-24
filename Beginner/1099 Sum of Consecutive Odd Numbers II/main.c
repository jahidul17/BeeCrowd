/*1099	Sum of Consecutive Odd Numbers II */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",N);

    for(int i=1; i<=7; i++)
    {
        int X,Y,temp;

        scanf("%d %d",&X,&Y);

        if(X>Y)
        {
            temp=X;
            X=Y;
            Y=temp;
        }

        int sum=0;

        for(int i=X+1; i<Y; i++)
        {


            if((i%2)!= 0)
            {
                sum=sum+i;
            }

        }
        printf("%d\n",sum);
    }





    return 0;
}
