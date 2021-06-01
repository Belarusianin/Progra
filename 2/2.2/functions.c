#include "functions.h"

double factorial(int n){//факториал
    if (n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

double getIteration(double x,int n){//через итерации
    double sum=0;
    while (n > 0)
    {
        sum += pow(-1,n-1)*pow(x,2*n-1)/factorial(2*n-1);
        n--;
    }
    return sum;
}

double getRecursia(double x,int n){//рекурсией
    if(n == 1){
        return x;
    }
    return (pow(-1,n-1)*pow(x,2*n-1)/factorial(2*n-1)) + getRecursia(x , n-1);
}