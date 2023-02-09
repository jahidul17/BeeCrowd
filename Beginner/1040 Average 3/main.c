#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,n4,avarage;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    n1=n1*2;
    n2=n2*3;
    n3=n3*4;
    n4=n4*1;

    avarage=(n1+n2+n3+n4)/(2+3+4+1);

    printf("Media: %.1lf\n",avarage);

    if(avarage>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(avarage<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(avarage>=5.0 && avarage<7.0)
    {
        printf("Aluno em exame.\n");
        double x;
        printf("Nota do exame: ");
        scanf("%lf",&x);

        avarage=(avarage+x)/2;

        if(avarage>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",avarage);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",avarage);
        }

    }
    return 0;
}
