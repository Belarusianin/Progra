#include "func.h"

bool check(char* dictionary[], char* word ,int quantity[],int current){
    for (int i = 0; i < current; i++)
    {
        if (Compare(dictionary[i],word) == 0)
        {
            quantity[i]++;
            return false;
        } 
    }
    return true;
}

int Compare(char* first , char* second){
    int i = 0;
    while (first[i] != '\0' || second[i] != '\0')
    {
        if (first[i] > second[i])
        {
            return 1;
        }else if (first[i] < second[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}

char* Split(char* str, char determine){
    static char* lastPtr = NULL;
    if (str==NULL)
    {
        if (!lastPtr)
        {
            return NULL;
        }
        str = lastPtr+1;
    }
    int i = 0;
    for (i = 0; ; i++)
    {
        if (*(str + i) == determine || *(str+i) == '\0')
        {
            break;
        }
    }
    if (!*(str + i))
    {
        lastPtr = NULL;
    }else{
        lastPtr=str+i;
        *lastPtr ='\0';
    }
    return str;
}