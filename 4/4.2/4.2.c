#include <stdio.h>
#include <stdlib.h>
#define N 1024

void printStars(int value)
{
    int i = 0;
    for (i = 0; i < value; i++)
    {
        printf("*");
    }
    printf (" | %d", value);
}

int main() {

    char buffer[N];

    int letters[26] = {0};
    FILE *text;
    text = fopen("text.txt", "rb");

    while (fgets(buffer, N, text) != NULL)
    {
        int i = 0;
        for (i = 0; i < N; i++)
        {
            if (buffer[i] > 96 && buffer[i] < 123)
            {
                letters[buffer[i] - 97]++;
            }
        }
    }
    int i = 0;
    int j = 0;
    for (i = 0; i < 26; i++)
    {
        printf("%c", (char)(i + 97));
        for (j = 0; j < (letters[i] / 10); j++)
        {
            printf("*");
        }
        printf(" | %d \n", letters[i]);
    }

    fclose(text);

    system("pause");
    return 0;
}