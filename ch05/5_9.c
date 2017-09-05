#include <stdio.h>

int main(void)
{
    double F;
    printf("Enter degree Fahrenheit:\n");
    scanf("%f", &F);
    void Temperatures(double F);

    Temperatures(F);
    return 0;
}

void Temperatures(double F)
{
    double C, K;

    C = 5.0 / 9.0 * (F - 32.0);
    K = C + 273.16;
    printf("Degree Celsius is %f\n", C);
    printf("Degree Kelvin is %f\n", K);
}