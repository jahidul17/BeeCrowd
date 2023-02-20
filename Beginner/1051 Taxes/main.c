#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num,temp,tax1,tax2,tax3,tax;
    scanf("%lf",&num);

    if(num>=0.00 && num<=2000.00)
    {
        printf("Isento\n");

    }

    else if(num>=2000.01 && num<=3000.00)
    {
        num=num-2000.00;
        tax1=(num/100)*8;
        printf("R$ %.2lf\n",tax1);
    }

    else if(num>=3000.01 && num<=4500.00)
    {
        tax1=(1000/100)*8;
        num=num-3000.00;
        tax2=(num/100)*18;
        tax=tax1+tax2;
        printf("R$ %.2lf\n",tax);

    }

    else if(num>4500.00)
    {

        tax1=(1000/100)*8;
        tax2=(1500/100)*18;
        num=num-4500.00;
        tax3=(num/100)*28;
        tax=tax1+tax2+tax3;
        printf("R$ %.2lf\n",tax);


    }


    return 0;
}
