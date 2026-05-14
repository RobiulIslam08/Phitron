#include <stdio.h>

void print_num (int n, int i){
    if(i>n) {
        return;
    }
    printf("%d\n", i);
     print_num(n, i+1);
}
int main () {
    int n;
    scanf("%d", &n);
    
    print_num(n, 1);
    return 0;
}