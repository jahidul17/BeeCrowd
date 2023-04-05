/* 1158		Sum of Consecutive Odd Numbers III */
#include <iostream>

using namespace std;

int main()
{
    int i,n,x,y,count=0,sum=0;
    cin>>n;

    while(n>=1)
    {
        cin>>x>>y;

        for(i=x;; i++)
        {
            if(i%2 != 0)
            {
                sum=sum+i;
                count++;
            }
            if(count==y)
            {
                break;
            }
        }
        cout<<sum<<endl;
        count=0;
        sum=0;

        n--;
    }

    return 0;
}
