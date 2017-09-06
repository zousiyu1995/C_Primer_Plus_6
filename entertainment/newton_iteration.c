#include <stdio.h>
#include <math.h>

double cuberoot(double n);
int main()
{
    printf("%3.30f", cuberoot(11));
}

double cuberoot(double n)
{
    double error = 1e-10;
    double result = n / 2, last;
    int count = 1;

    while (1)
    {
        printf("The %d iteration is in progress\n", count++);
        last = result;
        result = last - (last * last * last - n) / (3 * last * last);
        if ((result * result * result - n) <= abs(error))
        {
            break;
        }
    }
    return result;
}
