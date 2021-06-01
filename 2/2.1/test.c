#include <assert.h>
#include "functions.c"
#include <stdio.h>
#include <stdbool.h>

void TestCheckTime(){
    assert(checkTime(1,1) == true);
    assert(checkTime(10,20) == true);
    assert(checkTime(-1,20) == false);
    assert(checkTime(10,-1) == false);
}

void TestShowTime(){
    assert(showTime(14) == 10);
    assert(showTime(-1) == -1);
    assert(showTime(100) == 72);
}

void TestGetProfit(){
    assert(getProfit(30,2) == -1270);
    assert(getProfit(62,1) == 463);
}

#undef main

int main(){
    TestCheckTime();
    TestShowTime();
    TestGetProfit();
    return 0;
}