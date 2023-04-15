#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,x[n],a[n],c;


    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }


    a[0]=x[0];
    for(i=1; i<n; i++)
    {
        if(a[0]>x[i])
        {
            a[0]=x[i];
            c=i;
        }

    }
    cout<<"Menor valor: "<<a[0]<<endl;
    cout<<"Posicao: "<<c<<endl;


    return 0;
}
