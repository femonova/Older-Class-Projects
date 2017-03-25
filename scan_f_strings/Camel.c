// This works but not on HackerRank...?

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    char c;
    int count = 1;
    int ch;
    while ((ch = getchar()) != '\n')
    {
        if(ch >= 'A' && ch <= 'Z')
            count++;
    }
    printf("%d", count);
    return 0;
}
