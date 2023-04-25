/* 1534		Array 123 */
#include <bits/stdc++.h>    // all function with in c and c++
using namespace std;

int main()
{
    int n,row,col,k;

    while(scanf("%d",&n)!= EOF)
    {
        int array[n][n];

        k=n-1;
        for(row=0; row<n; row++)
        {
            for(col=0; col<n; col++)
            {

                if(row==col)
                {
                    array[row][col]=1;
                }
                else
                {
                    array[row][col]=3;
                }


                if(col==k)
                {
                    array[row][col]=2;
                }
                //Else array[row][n-1-row]=2;

            }
            k--;

        }

        //Output matrix
        for(row=0; row<n; row++)
        {
            for(col=0; col<n; col++)
            {
                cout<<array[row][col];

            }
            cout<<endl;
        }

    }


    return 0;
}
