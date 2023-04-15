/* 1179		Array Fill IV */
#include <iostream>

using namespace std;

int main()
{
    int  i,j,par[15],impar[15],t_impar,store[15];
    for(i=0; i<15; i++)
    {

        cin>>store[i];
    }

    j=0;
    for(i=0; i<15; i++)
    {

        if(store[i]%2==0)
        {
            par[j]=store[i];
            j++;

        }

    }

    j=0;
    for(i=0; i<15; i++)
    {

        if(store[i]%2!=0)
        {
            impar[j]=store[i];
            j++;

        }

    }


    for(i=0; i<15; i++)
    {
        if(i==5)
        {
            break;
        }
        cout<<"par["<<i<<"] = "<<par[i]<<endl;

    }


    for(j=0,i=0; i<15; j++,i++)
    {

        if(impar[i]==NULL)
        {
            break;
        }

        cout<<"impar["<<j<<"] = "<<impar[i]<<endl;

        if(i==4)
        {
            j=0-1;
        }

    }



    j=0;
    for(i=0; i<16; i++)
    {

        if(i>4)
        {
            cout<<"par["<<j<<"] = "<<par[i]<<endl;
            j++;

        }

         if(impar[i]==NULL)
        {
            break;
        }
    }




    return 0;
}
