#include <stdio.h>
int main() {
    int a;
    long long int b;
    double c;
    char d;
    
    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%lf", &c);
    scanf(" %c", &d);
    printf("%d\n%lld\n%.2lf\n%c", a, b, c, d);
    return 0;

}