#include <stdio.h>
int main () {
   int t;
   scanf("%d", &t);
   for (int i = 0; i<t; i++) {
     long long int total, num1, num2,num3;
    scanf("%lld %lld %lld %lld", &total, &num1, &num2, &num3);
    
    long long int multiply = num1 * num2 * num3;
    
    if(total == 0) {
        printf("0\n");
    }else if(total % multiply == 0) {
        long long int result = total / multiply;

        printf("%lld\n", result);
    }else{
        printf("-1\n");

    }
    
    
   }
    return 0;
}