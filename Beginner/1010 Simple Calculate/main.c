#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code_product_1,code_product_2,units_of_product_1,units_of_product_2;
    double total_amount,price_for__one_unit_p1,price_for__one_unit_p2;

    scanf("%d %d %lf",&code_product_1,&units_of_product_1,&price_for__one_unit_p1);
    scanf("%d %d %lf",&code_product_2,&units_of_product_2,&price_for__one_unit_p2);

    total_amount=((units_of_product_1*price_for__one_unit_p1)+(units_of_product_2*price_for__one_unit_p2));

    printf("VALOR A PAGAR: R$ %.2lf\n",total_amount);

    return 0;
}
