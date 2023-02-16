#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num,increase,total_salary;
    int per;
    scanf("%lf",&num);

    if(num>=0 && num<=400){
        increase=(num/100)*15;
        total_salary=num+increase;
        per=15;

    }
    else if(num>400 && num<=800){
        increase=(num/100)*12;
        total_salary=num+increase;
        per=12;

    }
    else if(num>800 && num<=1200){
        increase=(num/100)*10;
        total_salary=num+increase;
        per=10;

    }
    else if(num>1200 && num<=2000){
        increase=(num/100)*7;
        total_salary=num+increase;
        per=7;

    }
    else if(num>2000){
        increase=(num/100)*4;
        total_salary=num+increase;
        per=4;

    }

    printf("Novo salario: %.2lf\n",total_salary);
    printf("Reajuste ganho: %.2lf\n",increase);
    printf("Em percentual: %d %%\n",per);

    return 0;
}
