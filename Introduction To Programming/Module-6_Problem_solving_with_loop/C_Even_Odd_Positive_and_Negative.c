#include <stdio.h>
int main () {
    int n; 
    int x;
    int Even = 0;
    int Odd = 0;
    int Positive = 0;
    int Negative = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d", &x);
        if( x % 2 == 0){
            Even++;

        }
        else{
            Odd++;
        }
        if(x > 0 ){
            Positive++;
        }
        else if(x <0){
            Negative++;
        }

    }
    printf("Even: %d\n", Even);
    printf("Odd: %d\n", Odd);
    printf("Positive: %d\n", Positive);
    printf("Negative: %d\n", Negative);
    return 0;
}