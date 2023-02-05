#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance;
    double fuel,average_distance;
    scanf("%d %lf",&distance,&fuel);

    average_distance=distance/fuel;

    printf("%.3lf km/l\n",average_distance);
    return 0;
}
