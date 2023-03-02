#include <stdio.h>
#include <stdlib.h>

int main()
{
    int initial_hour,initial_min,final_hour,final_min,hour,min;
    scanf("%d %d %d %d",&initial_hour,&initial_min,&final_hour,&final_min);

    if(initial_hour<final_hour){
        hour=final_hour-initial_hour;
    }
    else if(initial_hour>=final_hour){
        hour=24-initial_hour+final_hour;
    }
    if(initial_min<=final_min){
        min=final_min-initial_min;
    }
    else if(initial_min>final_min){
        min=60-initial_min+final_min;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);

    return 0;
}
