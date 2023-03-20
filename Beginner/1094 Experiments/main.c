/*1094 Experiments*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,num,C=0,R=0,S=0,total;
    double percentage_C,percentage_R,percentage_S;
    char ch;
    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d %c",&num,&ch);

       if(ch=='C'){
        C=C+num;
       }
       else if(ch=='R'){
        R=R+num;
       }
       else if(ch=='S'){
        S=S+num;
       }
    }

    total=C+R+S;
    percentage_C=(C/(double)total)*100;
    percentage_R=(R/(double)total)*100;
    percentage_S=(S/(double)total)*100;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",percentage_C);
    printf("Percentual de ratos: %.2lf %%\n",percentage_R);
    printf("Percentual de sapos: %.2lf %%\n",percentage_S);

    return 0;
}
