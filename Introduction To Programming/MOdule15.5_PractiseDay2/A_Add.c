#include <stdio.h>
void add (int a, int b ){

    int result = a + b;
    printf("%d\n", result);
}
int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    add(a,b);
    return 0;
}