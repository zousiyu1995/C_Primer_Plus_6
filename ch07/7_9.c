#include <stdio.h>
#include <stdbool.h>

int isPrime(int num);

int main()
{
    int num;
    puts("Enter a int!");
    scanf("%d", &num);
    if (num == 2)
    {
        printf("2\n");
    }
    else
    {
        for (int i = 3; i <= num; i += 2) // 只找奇数
        {
           if (isPrime(i))
           {
               printf("%d ", i);
           }
        }
    }

    return 0;
}

// 判断素数
int isPrime(int num)
{
    bool Prime = true;
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            Prime = false;
        }
    }
    return Prime;
}