#include <stdio.h>
#define MONTH 12
#define SIZE 5
void inter(int *u, int *v);
void printArray(int *days, int size);
int getTotalDays(int *days, int size);
unsigned sum(int *start, int * end);
void main()
{
	/*int x = 5, y = 10;
	printf("Pervonachal'no: x=%d, y=%d\n", x, y);
	inter(&x, &y);
	printf("Teper': x=%d, y=%d\n", x, y);*/
	

	/*int x = 99;
	int *p1, *p2;
	p1 = &x;
	p2 = p1;
	printf("Znachenie po adresu p1 i p2: %d %d\n", *p1, *p2);
	printf("Znachenie ukazatelei: p1 i p2: %p %p \n", p1, p2);*/

	/*int days[MONTH] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (days == &days[0])
		printf("Verno ravnyaetsya \n");

	short dates[SIZE] = { 0,1,2,3,4 };
	short *pi = NULL;

	double bills[SIZE] = { 0,1,2,3,4 };
	double *ptf = NULL;
	pi = dates;
	ptf = bills;
	printf("\t\t   short double \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("ukazateli + %d: %10p %10p \n", i, pi + i, ptf + i);
		printf("-->>> znacheniya: %d - %d \n", *(pi + i), *(ptf + i));
	}*/

	//int days[MONTH] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//printf("Ob'em pamyati, otvedennyi massiv *days = %d\n", sizeof(days));
	//printArray(days, MONTH);//days==&days[0]
	int result = sum(days, days + MONTH);
	printf("result=%d")
}

void inter(int *u, int *v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}

void printArray(int *days, int size)
{
	printf("Ob'em pamyati, otvedennyi massiv *days = %d\n", sizeof(days)); 
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", *(days+i));
	}
	printf("\n");
}

int getTotalDays(int* days, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
		total += *(days+i);
	return total;
}

unsigned sum(int *start, int *end)
{
	unsigned total = 0;
	while (start < end)
	{
		//dobavlyaem znachenie k total
		total += *start;
		start++; //start=start+1;
	}
	return total;
}