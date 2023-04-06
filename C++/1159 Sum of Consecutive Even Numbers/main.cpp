/* 1159		Sum of Consecutive Even Numbers */
#include <iostream>
using namespace std;

int main()
{
    int  i,x,count=0,sum=0;

    while(true)
    {
        cin>>x;
        if(x==0)
        {
            break;
        }


        for(i=x;; i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
                count++;
            }
            if(count==5)
            {
                break;
            }

        }
        count=0;
        cout<<sum<<endl;
        sum=0;

    }


    return 0;
}
