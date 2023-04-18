/* 1186		Below the Secundary Diagonal */
#include <iostream>

using namespace std;

int main()
{
    double m[12][12],sum=0.0;
    char o;
    int row,col,z=11,count=0;

     cin>>o;

    for(row=0; row<12; row++)
    {
        for(col=0; col<12; col++)
        {
            cin>>m[row][col];
        }
    }

    for(row=1; row<12; row++)
    {
        for(col=11; col>=z; col--)
        {
            sum=sum+m[row][col];

        }
        z--;

    }

    if(o=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        printf("%.1lf\n",sum/66.0);
    }


    return 0;
}
