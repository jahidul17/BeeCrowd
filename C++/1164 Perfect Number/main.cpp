/* 1164		Perfect Number */
#include <iostream>

using namespace std;

int main()
{
    int test,i;
    cin>>test;
    for(i=0; i<test; i++)
    {
        int i,x,sum=0;
        cin>>x;

        for(i=1; i<x; i++)
        {
            if(x%i == 0)
            {
                sum=sum+i;

            }
        }

        if(x==sum)
        {
            cout<<x<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }

    return 0;
}
