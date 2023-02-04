#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,Greatest;
    scanf("%d %d %d",&a,&b,&c);

    Greatest=(a+b+abs(a-b))/2;
    Greatest=(Greatest+c+abs(Greatest-c))/2;

    printf("%d eh o maior\n",Greatest);

    return 0;
}
