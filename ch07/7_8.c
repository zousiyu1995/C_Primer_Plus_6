#include <stdio.h>

void menu();
double get_hourly_rate(int choice);
double get_salary(double hourly_rate);

int main()
{
    menu(); // 显示菜单

    int choice;
    double hourly_rate;
    scanf("%d", &choice); // 获取用户输入

    if (choice > 5 || choice < 1)
    {
        printf("please input 1-5, try again!\n");
        menu();
        scanf("%d", &choice);
        hourly_rate = get_hourly_rate(choice);
    }
    else
    {
        hourly_rate = get_hourly_rate(choice);
    }

    // printf("choice is %d\n", choice);
    // printf("hourly rate is %f\n", hourly_rate);

    get_salary(hourly_rate);
    return 0;
}

// 选择时薪
double get_hourly_rate(int choice)
{
    double hourly_rate;
    switch (choice)
    {
    case 1:
        hourly_rate = 8.75;
        break;
    case 2:
        hourly_rate = 9.33;
        break;
    case 3:
        hourly_rate = 10.00;
        break;
    case 4:
        hourly_rate = 11.20;
        break;
    case 5:
        puts("quit");
        return 0;
    default:
        puts("Can only choose 1-5");
    }

    return hourly_rate;
}

// 获取薪水
double get_salary(double hourly_rate) // 传入时薪
{
    if (hourly_rate == 0) // 时薪=0说明选择了5) quit
    {
        return 0;
    }
    puts("Enter your work time:");
    const double OVERTIME = hourly_rate * 1.5;
    int work_time;
    double salary, tax, net;
    scanf("%d", &work_time);

    // 税前
    if (work_time <= 40)
    {
        salary = work_time * hourly_rate;
    }
    else
    {
        salary = 40 * hourly_rate + (work_time - 40) * OVERTIME;
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

void menu()
{
    puts("Enter the num corresponding to the desired pay rate or action:");
    void asterisk();
    asterisk();
    printf("%-25s", "1) $8.75/hr");
    printf("%-25s\n", "2) $9.33/hr");
    printf("%-25s", "3) $10.00/hr");
    printf("%-25s\n", "4) $11.20/hr");
    printf("5) quit\n");
    asterisk();
}

// 星号线
void asterisk()
{
    for (int i = 0; i < 45; i++)
    {
        printf("*");
    }
    printf("\n");
}