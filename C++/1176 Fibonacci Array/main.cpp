/* 1176		Fibonacci Array */
#include <iostream>

using namespace std;

int main()
{
    int i,n,t;
    unsigned long long fibonicci[60],fibo,fibo_1=0,fibo_2=1;

    fibonicci[0]=fibo_1;
    fibonicci[1]=fibo_2;

    for(i=2; i<=60; i++)
    {
        fibo=fibo_1+fibo_2;

        fibonicci[i]=fibo;

        fibo_1=fibo_2;
        fibo_2=fibo;


    }

    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        cout<<"Fib("<<n<<") = "<<fibonicci[n]<<endl;
    }


    return 0;
}
