#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    int notes[6]= {100, 50, 20, 10, 5, 2},taka,money[6];
    int coin[6]= {100, 50, 25, 10, 5, 1},i,poisa,money_p;
    scanf("%lf",&num);

    taka=num;

    printf("NOTAS:\n");
    for(i=0; i<6; i++)
    {
        money[i]=taka/notes[i];
        taka=taka%notes[i];
        printf("%d nota(s) de R$ %d.00\n",money[i],notes[i]);
    }

    printf("MOEDAS:\n");

    poisa=num*100;
    poisa=poisa%100;

    for(i=0; i<6; i++)
    {
        money_p[i]=poisa/coin[i];
        poisa=poisa%coin[i];
        printf("%d moeda(s) de R$ %.2lf\n",money_p[i],(double)coin[i]/100);
    }



    return 0;
}
