#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "func.c"
#define MAX_WORD 40
#define MAX_LEN 80

int main(){

    char* dictionary[MAX_WORD], *temp, text[MAX_LEN];
	char separator = ' ';
    int quantity[MAX_WORD];
    printf("Put text in 80 char max : \n");
    gets(text);
    text[MAX_LEN -1] ='\0';
    temp = Split(text,separator);
    int u = 0;
    while (temp)
    {
        if (check(dictionary,temp,quantity,u))
        {
            dictionary[u] = temp;
            quantity[u]=1;
            u++;
        }
        temp = Split(NULL,separator);
    }   

    for (int i = 0; i < u; i++)
    {
        printf("%s %d\n",dictionary[i],quantity[i]);
    }

    free(temp);
    system("pause");
    return 0;
}