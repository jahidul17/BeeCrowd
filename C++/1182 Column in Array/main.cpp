/* 1182		Column in Array */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double m[12][12],sum=0.0,avg;
    int i,j,c;
    char t;
    cin>>c;
    cin>>t;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>m[i][j];
            if(j==c){
                sum+=m[i][j];
            }
        }
    }


    if(t=='S')
    {

        printf("%.1lf\n",sum);
    }

    else
    {
        avg=sum/12;
        printf("%.1lf\n",avg);
    }

    return 0;
}
