#include <assert.h>
#include "func.h"
int test_Split()
{
    char arr[] = "12 34";
    assert(Split(arr,' ') == arr);
    assert(Split(NULL,' ') == arr + 3);
    assert(Split(NULL,' ') == NULL);
}

int test_Compare(){
    char first[] = "test";
    char second[] = "teest";
    char third[] = "test";
    assert(Compare(first,second) == -1);
    assert(Compare(first,third) == 0);
}

#undef main

int main()
{
    test_Split();
}