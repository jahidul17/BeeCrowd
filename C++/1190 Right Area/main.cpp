/* 1190		Right Area */
#include <iostream>

using namespace std;

int main()
{
    double m[12][12],sum=0.0;
    int row,col,i,j,x=5,y=6,count=0;
    char o;

    cin>>o;

    //Input total array.
    for(row=0;row<12;row++){
        for(col=0;col<12;col++){
            cin>>m[row][col];
        }
    }

    //summation of green area.
    for(i=7;i<=11;i++){
        for(j=x;j<=y;j++){
           sum=sum+m[j][i];
           count++;
        }
        x--;
        y++;
    }

    if(o=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        printf("%.1lf\n",sum/count);
    }

    return 0;
}
