#include <stdio.h>
int main () {
    int array[5];
    for(int i = 1; i<=5; i++){
        scanf("%d", &array[i]);
        
    }
    for(int i = 1; i<=5; i++){
        printf("%d ", array[i]);

    }
    return 0;
}