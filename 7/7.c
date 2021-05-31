#include <stdio.h>
#include <stdlib.h>
#include "func.c"

int main(){

    list = (List*)malloc(sizeof(List));
	list->first = NULL;
	list->last = NULL;
	list->counter = 0;

	FILE* students = fopen("students.txt", "r");
	if (students == NULL)
	{
		printf("\nSomething is wrong. File wasn't open :<");
		return 0;
	}

	while (!feof(students))
		pushBack(readStudent(students));
	
	while (1)
		showMenu();

	fclose(students);

    system("pause");
    return 0;
}