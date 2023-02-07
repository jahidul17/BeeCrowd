#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,year,rem,month;

    scanf("%d",&days);

    year=days/365;
    rem=days%365;
    printf("%d ano(s)\n",year);

    month=rem/30;
    rem=rem%30;
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",rem);

    return 0;
}
