#include <stdio.h>
#include <stdbool.h>

int main()
{
    int first, second;
    puts("This program computes moduli!");
    puts("Enter an Integer to serve as the second operand:");
    scanf("%d", &second);
    puts("Now enter the first operand:");
    scanf("%d", &first);
    printf("%d %% %d is %d\n", first, second, first % second);

    while (true)
    {
        puts("Enter next number for first operand (<=0 to quit):");
        scanf("%d", &first);
        if (first > 0)
        {
            printf("%d %% %d is %d\n", first, second, first % second);
        }
        else
        {
            puts("quit!");
            break;
        }
    }

    return 0;
}