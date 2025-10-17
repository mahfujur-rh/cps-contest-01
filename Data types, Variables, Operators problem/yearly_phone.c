#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int  lasttwodigits = x % 100;
    printf("k%02d",  lasttwodigits);
    return 0;
}
