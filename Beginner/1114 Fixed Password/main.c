/* 1114 Fixed Password */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;

    while(1)
    {
        scanf("%d",&test);

        if(test!= 2002)
        {
            printf("Senha Invalida\n");
        }

        if(test == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

    }

    return 0;
}
