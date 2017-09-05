#include <stdio.h>

void cube(float num);

int main(void)
{
    float num;
    puts("Enter a float:");
    scanf("%f", &num);
    printf("float is %2.20f\n", num);

    cube(num);
    return 0;
}

void cube(float num)
{
    printf("%f\n", num * num * num);
}