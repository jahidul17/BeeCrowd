#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i;

    for(i=0; i<=2; i+=0.2)
    {
        if((int)i==1){
            printf("I=%d\nI=%d\nI=%d\n",(int)i,(int)i,(int)i);
        }
       printf("I=%.1lf\nI=%.1lf\nI=%.1lf\n",i,i,i);

        if((int)i==2){
            printf("I=%d\nI=%d\nI=%d\n",(int)i,(int)i,(int)i);
        }

    }

    return 0;
}
