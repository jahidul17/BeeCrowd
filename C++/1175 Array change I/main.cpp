/* 1175		Array change I */
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int n[20];

    for(i=0;i<20;i++){
        cin>>n[i];
    }

    for(j=0,i=19;j<20,0<=i;j++,i--){
        cout<<"N["<<j<<"] = "<<n[i]<<endl;
    }

    return 0;
}
