#include <assert.h>
#include "functions.c"
#include <stdio.h>
#include <stdbool.h>

void TestFactiorial(){
    double first = 1,second = 120,third = 3628800;
    assert(factorial(1) == first);
    assert(factorial(5) == second);
    assert(factorial(10) == third);
}

void TestGetRecursia(){
    assert(getRecursia(1,1) == 1);
    assert((int)getRecursia(10,10) == -16);
    assert((int)getRecursia(100,100) == 2147483648);
}

void TestGetIteration(){
    assert(getIteration(1,1) == 1);
    assert((int)getIteration(10,10) == -16);
    assert((int)getIteration(100,100) == 2147483648);
}

#undef main

int main(){
    TestFactiorial();
    TestGetRecursia();
    TestGetIteration();
    return 0;
}