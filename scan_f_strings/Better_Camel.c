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
    char *s = malloc(10248 * sizeof(int));
     scanf("%s",s); //Apparently %s stores this as a char [] type of deal
    int i, acc = 0,len = strlen(s); 
    for(i = 1; i < len; i++)
    { 
        if(s[i]>= 65 && s[i] <=90)
            acc++; 
    } 
    printf("%d",acc+1);
    return 0;
}
