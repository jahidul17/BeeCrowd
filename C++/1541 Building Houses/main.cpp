/* 1541		Building Houses */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c,i,temp,area;

    while(1)
    {
        cin>> a;

        if(a==0)
        {
            break;
        }

        cin>>b>>c;

        area=a*b*100/c;

        for(i=1;; i++)
        {
            temp=i*i;
            if(temp>area)
            {
                break;
            }
        }

        cout<<i-1<<endl;

    }

    return 0;
}
