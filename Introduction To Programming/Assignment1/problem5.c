#include <stdio.h>
int main() {
    long long int N;
    long long int amount;
    scanf("%lld", &N);
    if(N > 1000 ){
        printf("I will buy Punjabi\n");
        amount = N - 1000;
        if(amount >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }else{
        printf("Bad luck!\n");
    }
    return 0;
}