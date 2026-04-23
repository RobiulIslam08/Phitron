#include <stdio.h>
#include <string.h>
int main () {
    char a[101], b[101];
    scanf("%s %s", a, b);
    
    // manually
    // int lenB = strlen(b);
    // int lenA = strlen(a);
    // for(int i = 0 ; i<= lenB; i++) {
    //     a[lenA + i] = b[i];
    // }

    // built in fuction
    strcat(a, b);
    printf("%s %s", a, b);
    return 0;
}