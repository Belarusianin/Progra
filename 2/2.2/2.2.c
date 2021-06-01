#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.c"

int main(){
    double x,E;
    unsigned long long n = 1;
    printf("Put x and E :\n");
    scanf("%lg%lg",&x,&E);
    double sub;
    double sumIteration;
    do
    {
        sumIteration = getIteration(x,n);
        sub = fabs(sumIteration - sin(x));
        n++;
    } while (sub > E);
    printf("n = %u\n",n);
    double sumRecusia = getRecursia(x,n);
    printf("TeilorIteration: %lg\nSin(x): %lg\nTeilorRecursia: %lg\n",sumIteration,sin(x),sumRecusia);
    system("pause");
}

