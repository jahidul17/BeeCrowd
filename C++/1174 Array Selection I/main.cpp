#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int i,n;
    double a[100];

    for(i=0;i<3;i++){
           cin>>a[i];
    }

    for(i=0;i<3;i++){
        if(a[i]<=10){
            cout<<"A["<<i<<"] = "<<(double)a[i]<<endl;
        }
    }



    return 0;
}
