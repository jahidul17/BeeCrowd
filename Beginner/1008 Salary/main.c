#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp_number,month_hour;
    float per_hour_salary;

    scanf("%d %d %f",&emp_number,&month_hour,&per_hour_salary);

    float SALARY = month_hour*per_hour_salary;

    printf("NUMBER = %d\n",emp_number);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;
}
