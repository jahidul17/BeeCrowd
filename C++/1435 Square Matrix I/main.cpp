#include <iostream>

using namespace std;

int main()
{
    int row,col,i,j,n,array[50][50],a,b,r,l;
    a=0;
    b=n-1;

    while(1)
    {
        cin>>n;


       if(n%2==0){
        r=n/2;
       }
       else if(n%2!=0){
        r=(n/2)+1;
       }

       for(l=1;l<=r;l++){
        for(row=a; row<=b; row++)
        {
            for(col=a; col<=b; col++)
            {

                array[row][col]=1;

            }

        }
        a++;
        b--;

       }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j==0)
                    printf("%3d",array[i][j]);
                else
                    printf(" %3d",array[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }


    return 0;
}
