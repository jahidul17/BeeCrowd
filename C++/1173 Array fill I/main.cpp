/* 1173		Array fill I */
#include <iostream>

using namespace std;

int main()
{
    int i,x,n[10];
    cin>>x;


    for(i=0; i<10; i++)
    {
        if(i==0)
        {
            cout<<"N["<<i<<"] = "<<x<<endl;


        }
        else
        {
            x=x*2;
            cout<<"N["<<i<<"] = "<<x<<endl;
        }


    }

    return 0;
}
