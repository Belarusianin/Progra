#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	char* surname; //фамилия
	char* name; //имя
	char* lastname; //отчество
	int course; //курс
	int group; //группа
	int* marks1, * marks2; /*оценки за первую и вторую сессии*/
	double average1, average2; /*средний балл за первую и вторую сессии*/

	int ratingPlace1, ratingPlace2; /*место в рейтинге первой и второй сесии*/
	double averageDelta; /*рост (положительный или отрицательный) относительно последней сессии*/
	int ratingDelta; /*изменение места в рейтинге*/
} Student;

typedef struct node
{
	int number;
	Student* student;
	struct node* next;
	struct node* prev;
} Node;

typedef struct list
{
	Node* first, * last;
	int counter;
} List;

List* list;
int updated = 0;

void showMenu(void);
int chooseOption(void);

void showStudent(Student* student, int sem);
void showList(int sem);
void showByGroup(int group);
void showByCourse(int course);
void QuickSortList(Node* left, Node* right);

double getAverage(int** marks);
double getAverageDelta(Student* student);
int getRatingDelta(Student* student);
void update();

char* readString(FILE* file);
int* readDigit(FILE* file);
Student* readStudent(FILE* file);
void pushBack(Student* student);
void writeStudent(Student* student, FILE* file);

void save();