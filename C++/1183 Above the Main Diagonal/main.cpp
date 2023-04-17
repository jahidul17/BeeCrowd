/* 1183		Above the Main Diagonal */
#include <iostream>

using namespace std;

int main()
{
    double m[12][12],count=0,sum=0;
    int i,j;
    char o;
    cin>>o;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>m[i][j];
            if(i<j)
            {
                sum+=m[i][j];
                count++;
            }
        }
    }

    if(o=='S')
    {
        printf("%.1lf\n",sum);
    }
    else
    {
        printf("%.1lf\n",sum/count);
    }

    return 0;
}
