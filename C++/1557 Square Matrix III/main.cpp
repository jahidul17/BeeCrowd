/* 1557	Square Matrix III */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,row,col,pw,rem;

    while(true)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }


        for(row=0; row<n; row++)
        {
            for(col=0; col<n; col++)
            {
                pw=row+col;

                rem=pow(2,pw);
                printf("%4d",rem);
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
