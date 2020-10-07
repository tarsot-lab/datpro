/* Construcción del número pi */
#include <stdio.h>
#include <math.h>
int main(void)
{
    signed int i = 1;
    long double suma = 0.0;
    for(; i <= 1000000   ; i++)
    suma += (double)pow(-1.0, i + 1.0) / (2.0 * i - 1.0);
    suma *= 4.0;
    printf("%.32llf\n", suma);
    return 0;
}

