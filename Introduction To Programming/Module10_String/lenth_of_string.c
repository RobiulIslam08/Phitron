#include <stdio.h>
int main () {
    char name[101] ;
    scanf("%s",name);
    int size = strlen(name);
    printf("%d", size);
    return 0;
}