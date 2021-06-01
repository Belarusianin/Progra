#include <stdlib.h>
#include <stdio.h>
#include "func.c"

int main(){
    int N;
    printf("Put N:\n");
    N = Put();
    int** matrix = calloc(N,sizeof(int*));
    if(!matrix){
        printf("Incorrect value\n");
        system("pause");
        return 0;  
    }    
    for (int i = 0; i < N; i++)
    {
        matrix[i] = calloc(N,sizeof(int));
        
    }
    
    Fill(matrix,N);
    Show(matrix,N);

    for (int i = 0; i < N; i++)
    {
        free(matrix[i]);
    }
    
    free(matrix);

    system("pause");
    return 0;
}