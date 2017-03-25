#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *p, const void *q);

int main (int argc, char const *argv[])
{

        int i;
        int length;
        int *a;
        int b = 1;

        a = malloc(argc * sizeof(int));

        for(i = 0; i < argc -1; i++)
        {
          a[i] = atoi(argv[b]);
          b++;
        }
printf("%d\n", argc - 1);
        qsort(a, argc -1, sizeof(int), compare_int);

        for(i = 0; i < argc -1; i++)
                printf("%d\t", a[i]);

        free(a);


return 0;
}

int compare_int(const void *p, const void *q)
{
        //first cast p as an int pointer, then grab it's value

        return *(int *)p - *(int *)q;
}
