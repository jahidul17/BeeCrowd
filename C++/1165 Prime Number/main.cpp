/* 1165	Prime Number */
#include <iostream>

using namespace std;

int main()
{
    int j,test;
    cin>>test;

    for(j=1; j<=test; j++)
    {
        int i,x,count=0;
        cin>>x;

        for(i=2; i<x; i++)
        {
            if(x%i==0)
            {
                count++;
                break;
            }
        }
        if(count==1)
        {
            cout<<x<<" nao eh primo\n";
        }
        else
        {
            cout<<x<<" eh primo\n";
        }
    }
    return 0;
}
