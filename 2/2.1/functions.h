#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int getTime();
bool checkTime(int month,int day);
bool check(int time, int progers);
int getProgers();
int showTime(int time);
void getComplexity(int time, int progers);
void getParameters(int time,int progers);
int getTotalRevinue(int time);
int getTotalSalary(int time, int progers);
int getOverheadCosts(int time,int progers);
int getProfit(int time,int progers);
void makeDecision(int time,int progers);
void information();
