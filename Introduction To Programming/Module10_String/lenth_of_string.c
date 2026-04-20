#include <stdio.h>
int main () {
    char name[101] ;
    scanf("%s",name);
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++){
        count++;
    }
    printf("%d", count);
    return 0;
}