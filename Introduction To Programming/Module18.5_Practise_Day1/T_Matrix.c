#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int primary_sum = 0;
    int seondary_sum = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
           if(i==j){
            // printf("%d", a[i][j]);
            primary_sum = primary_sum + a[i][j];

           }
           if(n-1 == i+j){
            // printf("%d", a[i][j]);
            seondary_sum = seondary_sum + a[i][j];

           }
        }
      
    }
   int differance = abs(primary_sum - seondary_sum);
    printf("%d", differance);



    return 0;
}