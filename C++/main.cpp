/* 1789		The Race of Slugs */
#include <iostream>

using namespace std;

int main()
{
    int  test,i,j;

    while(scanf("%d",&test)!=EOF)
    {
        int speed[test];
        for(i=0; i<test; i++)
        {
            cin>>speed[i];
        }

        j=speed[0];
        for(i=1; i<test; i++)
        {
            if(speed[i]>j)
            {
                j=speed[i];
            }

        }

        if(j<10)
        {
            cout<<"1"<<endl;
        }
        else if(j>=10 && j<20)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }

    }


    return 0;
}
