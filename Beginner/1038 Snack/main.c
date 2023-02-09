#include <stdio.h>
#include <stdlib.h>

int main() {

    int product_code,quantity;
    scanf("%d %d",&product_code,&quantity);

    switch(product_code){

        case 1:
            printf("Total: R$ %.2lf\n",(double)4.00*quantity);
            break;
        case 2:
            printf("Total: R$ %.2lf\n",(double)4.50*quantity);
            break;
        case 3:
            printf("Total: R$ %.2lf\n",(double)5.00*quantity);
            break;
        case 4:
            printf("Total: R$ %.2lf\n",(double)2.00*quantity);
            break;
        case 5:
            printf("Total: R$ %.2lf\n",(double)1.50*quantity);
            break;

    }
}
