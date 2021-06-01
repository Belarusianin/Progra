#include "functions.h"

int getTime() {
    int startMonth, startDay, endMonth, endDay;
    printf("When does the project start? Enter month and day:\n");
    do
    {
        scanf("%d%d", &startMonth, &startDay);
    } while (!checkTime(startMonth,startDay));

    printf("When does the project end ? Enter month and day:\n");
    do
    {
        scanf("%d%d", &endMonth, &endDay);
    } while (!checkTime(endMonth, endDay));

    endMonth <= startMonth ? endMonth += startMonth : endMonth;
    startMonth = startMonth * 30 + startDay;
    endMonth = endMonth * 30 + endDay;

    return endMonth - startMonth;
}

bool checkTime(int month, int day) {
    if (month < 13 && month > 0 && day < 32 && day > 0)
    {
        return true;
    }
    printf("Wrong number , try again \n");
    return false;
}

int getProgers() {
    int progers;
    printf("Quantity of programmers : ");
    scanf("%d",&progers);
    if (progers <= 0)
    {
        printf("Wrong value");
        return 0;
    }
    return progers;
}

bool check(int time,int progers) {
    if (time > 0 && progers > 0)
        return true;
    else
        return false;
}

int showTime(int time) {
    if (time > 0)
    {
        printf("Quantity calendar days : %d\n", time);
        time -= 2 * (time / 7);
        printf("Quantity working days : %d", time);
    }
    else 
    {
        printf("You should enter the time");
    }
    return time;
}

void getComplexity(int time, int progers) {
    if (check(time,progers))
    {
        printf("Quantity of human-days : %d\n", time / progers);
        time *= 8;
        printf("Quantuty of human-hours : %d\n", time / progers);
    }
    else
    {
        printf("Enter the time and quantity of programmers");
    }
}

void getParameters(int time, int progers) {
    if (check(time, progers))
    {
        printf("Total revenue : %d\n", getTotalRevinue(time));
        printf("Total salary : %d\n", getTotalSalary(time, progers));
        printf("Overhead costs : %d\n",getOverheadCosts(time,progers));
        printf("Profit : %d\n",getProfit(time,progers));
    }
    else 
    {
        printf("Введите время и кол-во программистов");
        return;
    }
    
}

int getTotalRevinue(int time) {
    const int rate = 9;
    time *= 8;
    return time * rate;
}

int getTotalSalary(int time, int progers) {
    const int salary = 400;
    int total;
    total = (time / 22) * salary + (salary / 22) * time % 22;
    total *= progers;
    return round(total);
}

int getOverheadCosts(int time,int progers) {
    const double overhead = 2.5;
    return round(overhead * getTotalSalary(time, progers));
}

int getProfit(int time,int progers) {
    int salary = getTotalSalary(time, progers);
    int revinue = getTotalRevinue(time);
    int overhead = getOverheadCosts(time, progers);
    return revinue - salary - overhead;
}

void makeDecision(int time,int progers) {
    if (check(time, progers))
    {
        int profit = getProfit(time, progers);
        if (profit > 1000) {
            printf("Good deal. ");
        }
        else
        {
            printf("Bad deal. ");
        }
        printf("Profit :%d", profit);
    }
}

void information() {
    printf("Version : 2.1\nDeveloped by: Lebedev Artem\nEmail: LebedevArtem@gmail.com\n");
}