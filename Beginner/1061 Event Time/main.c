/*1061		Event Time*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,day,hour,min,sec;
    printf("Dia ");
    scanf("%d",&d1);
    scanf("%d",&h1);
    scanf("%d",&m1);
    scanf("%d",&s1);

    printf("Dia ");
    scanf("%d",&d2);
    scanf("%d",&h2);
    scanf("%d",&m2);
    scanf("%d",&s2);

    if(d1<d2){
        day=d2-(d1+1);

    }
    printf("%d dia(s)\n");

    if(h1>h2){
        hour=(24-h1)+h2;
    }
    printf("%d hora(s)\n",hour);

    if(m1>m2){
        min=(60-m1)+m2;
    }
    else{
        min=m2-m1;
    }

    printf("%d minuto(s)\n");

    if(s1>s2){
        sec=s2+(60-s1);
    }
    else{
        sec=s2-s1;
    }
    printf("%d segundo(s)\n");

    return 0;
}
