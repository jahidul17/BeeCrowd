#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i;

    for(i=0; i<=2; i+=0.2)
    {
        if((i>0 && i<1) ||(i>1 && i<2) || (i>2 && i<3) ){
            printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n",i,i+1,i,i+2,i,i+3);
        }

        if((i==0)||(i==1)||(i==2)) {
            printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n",(int)i,(int)i+1,(int)i,(int)i+2,(int)i,(int)i+3);
        }


    }

    return 0;
}
