/* 1181		Line in Array */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double m[12][12],sum=0.0,avg;
    int i,j,l;
    char t;
    cin>>l;
    cin>>t;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>m[i][j];
        }
    }


    if(t=='S')
    {
        for(i=0; i<12; i++)
        {
            sum=sum+m[l][i];

        }
        printf("%.1lf\n",sum);
    }

    if(t=='M')
    {
        for(i=0; i<12; i++)
        {
            sum=sum+m[l][i];

        }
        avg=sum/12;
        printf("%.1lf\n",avg);
    }

    return 0;
}
