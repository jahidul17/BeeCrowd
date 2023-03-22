#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i;

    for(i=0; i<=2; i+=0.2)
    {
        if((i>0 && i<1) ||(i>1 && i<2) || (i>2 && i<3) ){
            printf("I=%.1lf\nI=%.1lf\nI=%.1lf\n",i,i,i);
        }

        if((i==0)||(i==1)||(i==2)) {
            printf("I=%d\nI=%d\nI=%d\n",(int)i,(int)i,(int)i);
        }


    }

    return 0;
}
