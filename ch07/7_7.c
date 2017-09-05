#include <stdio.h>
#define BASE 10
#define OVERTIME 1.5 * 10

int main()
{
    puts("Enter your work time:");
    int work_time;
    double salary, tax, net;
    scanf("%d", &work_time);

    // 税前
    if (work_time <= 40)
    {
        salary = work_time * BASE;
    }
    else
    {
        salary = 40 * BASE + (work_time - 40) * OVERTIME;
    }

    // 税
    if (salary > 450)
    {
        tax = (salary - 450) * 0.25 + 150 * 0.2 + 300 * 0.15;
    }
    else if (salary > 300)
    {
        tax = 300 * 0.15 + (salary - 300) * 0.2;
    }
    else
    {
        tax = salary * 0.15;
    }

    net = salary - tax;
    printf("Your working hour: %d\n", work_time);
    printf("Total salary: %f\n", salary);
    printf("Tax: %f\n", tax);
    printf("Net salary: %f\n", net);

    return 0;
}