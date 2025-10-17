#include <stdio.h>

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    int rem = x - n * 10;
    printf("%d", rem / 20);
    return 0;

}

