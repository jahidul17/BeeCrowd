#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    double month_salary,bonus_salary,total_salary;

    scanf("%s",&name);
    scanf("%lf %lf",&month_salary,&bonus_salary);

    total_salary=month_salary+((bonus_salary/100)*15);

    printf("TOTAL = R$ %.2lf\n",total_salary);

    return 0;
}
