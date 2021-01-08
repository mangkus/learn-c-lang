#include <stdio.h>

main()
{
    float fahr, celc;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = celc;
    while (fahr <= upper)
    {
        celc = 5*(fahr - 32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celc);
        fahr = fahr + step;
    }
    
}