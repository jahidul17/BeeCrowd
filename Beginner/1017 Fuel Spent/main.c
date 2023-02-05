#include <stdio.h>
#include <stdlib.h>

int main()
{
    int spent_time,speed_trip;
    double total_fuel;
    scanf("%d %d",&spent_time,&speed_trip);
    total_fuel=(((1/12.0)*speed_trip)*spent_time);

    printf("%.3lf\n",total_fuel);
    return 0;
}
