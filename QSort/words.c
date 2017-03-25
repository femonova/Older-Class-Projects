#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare_string(const void *p, const void *q);

int main (int argc, char *argv[])
{

        int i;

        qsort(argv + 1, argc - 1, sizeof(char *), compare_string);

        for(i = 1; i <= argc -1; i++)
                printf("%s ", argv[i]);

        printf("\n");

        return 0;
}

int compare_string(const void *p, const void *q)
{
        //first cast p as an int pointer, then grab it's value

        return strcmp(*(char **)p, *(char **)q);
}
