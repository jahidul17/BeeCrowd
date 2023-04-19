/* 1187		Top Area */
#include <iostream>

using namespace std;

int main()
{
     double m[12][12],sum=0;
     int i,j,row,col,x=1,y=10,count=0;
     char o;

     cin>>o;

     //Input m[12][12] array.
     for(row=0;row<12;row++){
        for(col=0;col<12;col++){
            cin>>m[row][col];
        }
     }


     //summation of green area.
     for(i=0;i<5;i++){
        for(j=x;j<=y;j++){
           sum+=m[i][j];
           count++;
        }
        x++;
        y--;
     }


     if(o=='S'){
        printf("%.1lf\n",sum);//summation
     }
     else{
        printf("%.1lf\n",sum/count);//average
     }


    return 0;
}
