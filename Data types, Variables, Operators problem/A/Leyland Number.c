#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int powerAB = (int) pow(a, b);
     int powerBA = (int) pow(b, a);
     int sum = powerAB + powerBA;

    printf("%d", sum);
    return 0;
}
