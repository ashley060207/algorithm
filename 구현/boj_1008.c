#include <stdio.h>

int main(void)
{
    double a; double b;

    scanf("%lf %lf", &a, &b);
    printf("%.9lf", a/b);

    return 0;
}
