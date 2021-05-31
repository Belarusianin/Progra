#include "func.c"
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

void TestGetAvarege(){
    int* marks = (int*)malloc(sizeof(int));
    marks[0] = 9; marks[1] = 8; marks[2] = 7; marks[3] = 6;
    assert(getAverage(&marks) == (double)7.5);
}

void TestGetAverageDelta(){
    Student* student = (Student*)malloc(sizeof(Student));

    student->average1 = 6;
    student->average2 = 9;
    assert(getAverageDelta(student) == 3);
}

void TestGetRatingDelta(){
    Student* student = (Student*)malloc(sizeof(Student));

    student->ratingPlace1 = 6;
    student->ratingPlace2 = 9;
    assert(getRatingDelta(student) == 3);
}

#undef main

int main(){
    TestGetAvarege();
    TestGetAverageDelta();
    TestGetRatingDelta();
    return 0;
}



