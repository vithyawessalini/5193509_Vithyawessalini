#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[100], b[100];  
    scanf("%s", a);     
    scanf("%s", b);     

    for (int i = 0; a[i] != '\0'; i++) {
         printf("%c", a[i] == b[i] ? '0' : '1'); 
    }
    printf("\n");
    return 0;
}
