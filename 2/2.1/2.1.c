#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "functions.c"

int main(){
    int key, time = 0, progers = 0;
    printf("Enter the number (1-8) :\n");
    while (true)
    {
        
        printf("1.Put data\n2.Put programmers\n3.Duration of project\n4.Calculate complexity\n5.Calculate financial costs\n6.Expendiency\n7.About us\n8.Exit\n");
        scanf("%d", &key);
        system("cls");
        switch (key)
        {
        case 1: time = getTime();
            break;
        case 2: progers = getProgers();
            break;
        case 3: time = showTime(time);
            break;
        case 4: getComplexity(time, progers);
            break;
        case 5: getParameters(time, progers);
            break;
        case 6: makeDecision(time,progers);
            break;
        case 7: information();
            break;
        case 8: printf("Good bye");
            return 0;
        default:
            printf("Wrong number");
            break;
        }
        printf("\n");
    }    
    return 0;
}

