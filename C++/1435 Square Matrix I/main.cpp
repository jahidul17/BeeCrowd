/* 1435		Square Matrix I */
#include <iostream>

using namespace std;

int main()
{
    int row,col,i,j,n,a,b,r,l;

    while(1)
    {

        cin>>n;

        int array[n][n];
        a=0;
        b=n-1;

        if(n==0)
        {
            break;
        }

        r=n/2;

        if(n%2==1)
        {
            r=(n/2)+1;
        }


        for(l=1; l<=r; l++)
        {
            for(row=a; row<=b; row++)
            {
                for(col=a; col<=b; col++)
                {

                    array[row][col]=l;

                }

            }
            a++;
            b--;

        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                    printf("%3d",array[i][j]);
                else
                    printf(" %3d",array[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
}
