#include "func.h"

void Fill(int** matrix,int N){
    int num;
    for (int i = 0; i < N; i++)
    {
        num = i + 1;
        for (int j = 0; j < N; j++)
        {
            if (num > N)
            {
                num = 1;
            }
            matrix[i][j] = num;
            num++;
        }
    }   
}

void Show(int** matrix,int N){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
}

int Put(){
    int N;
    while (scanf("%d",&N) != 1)
    {
        if (scanf("%d",&N) != 1)
        {
            printf("Incorrect value");
        }
        while(getchar() != '\n'){}
    }
    return N;
}
