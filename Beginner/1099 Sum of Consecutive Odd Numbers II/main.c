/*1099	Sum of Consecutive Odd Numbers II */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d",n);

    for(int i=1; i<=7; i++)
    {
        int a,b,temp;

        scanf("%d %d",&a,&b);

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        int sum=0;

        for(int i=a+1; i<b; i++)
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
