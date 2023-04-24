/* 1478		Square Matrix II */
#include <iostream>

using namespace std;

int main()
{
    int row,col,n,a,b;

    for(;;)
    {
        cin>>n;

        int array[n][n];

        if(n==0)
        {
            break;
        }

        //Data store of square matrix.
        for(row=0; row<n; row++)
        {
            a=row+1;
            b=2;
            for(col=0; col<=row; col++,a--)
            {
                array[row][col]=a;

            }

            for(col=row+1; col<n; col++,b++)
            {
                array[row][col]=b;
            }
        }


        //Square Matrix Output.
        for(row=0; row<n; row++)
        {

            for(col=0; col<n; col++)
            {
                if(col==0)
                    printf("%3d",array[row][col]);
                else printf(" %3d",array[row][col]);
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
