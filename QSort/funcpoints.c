

#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *p, const void *q);

int main (void)
{
	printf("Hello! This is a program that will help you understand function pointers! Lets get started!");

	int i;
	int length;
	int *a;

	printf("\nHow long will be the array?");
	scanf("%d", &length);

	a = malloc(sizeof(int) * length);

	for(i = 0; i < length; i++)
	{
		printf("Enter number: ");
		scanf("%d", &a[i]);
	}

	qsort(a, length, sizeof(int), compare_int);

	for(i = 0; i < length; i++)
		printf("%d", a[i]);


return 0;
}

int compare_int(const void *p, const void *q)
{
	//first cast p as an int pointer, then grab it's value
	return *(int *)p - *(int *)q;
}


