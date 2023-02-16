#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_hour,int_min,final_hour,final_min;
    scanf("%d %d %d %d",&int_hour,&int_min,&final_hour,&final_min);

    if(int_hour<final_hour)
    {
        int time=final_hour-int_hour;

        if(time==1){
        printf("O JOGO DUROU 0 HORA(S)");
        }
        else{
            printf("O JOGO DUROU %d HORA(S)",time);
        }

        if(int_min<final_min)
        {
            printf(" E %d MINUTO(S)\n",final_min-int_min);
        }
        else if(int_min==final_min)
        {
            printf(" E %d MINUTO(S)\n",60-int_min+final_min);
        }
        else if(int_min>final_min)
        {
            printf(" E %d MINUTO(S)\n",60-int_min+final_min);
        }
    }

    else if(int_hour==final_hour)
    {
        int time=24-final_hour+int_hour;
        printf("O JOGO DUROU %d HORA(S)",time);

        if(time<24)
        {
            if(int_min<final_min)
            {
                printf(" E %d MINUTO(S)\n",final_min-int_min);
            }
            else if(int_min==final_min)
            {
                printf(" E %d MINUTO(S)\n",60-int_min+final_min);
            }
            else if(int_min>final_min)
            {
                printf(" E %d MINUTO(S)\n",60-int_min+final_min);
            }
        }
        else{
            printf(" E 0 MINUTO(S)\n");
        }


    }

    else
    {
        printf("O JOGO DUROU %d HORA(S)",24-int_hour+final_hour);

        if(int_min<final_min)
        {
            printf(" E %d MINUTO(S)\n",final_min-int_min);
        }
        else if(int_min==final_min)
        {
            printf(" E %d MINUTO(S)\n",60-int_min+final_min);
        }
        else if(int_min>final_min)
        {
            printf(" E %d MINUTO(S)\n",60-int_min+final_min);
        }
    }

    return 0;
}
