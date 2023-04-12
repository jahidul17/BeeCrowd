/* 1177		Array Fill II */
#include <iostream>

using namespace std;

int main()
{
    int i,j,t;
    cin>>t;

    for(i=0,j=0;i<1000;j++,i++){
        cout<<"N["<<i<<"] = "<<j<<endl;
        if(j==(t-1)){
            j=0-1;
        }
    }


    return 0;
}
