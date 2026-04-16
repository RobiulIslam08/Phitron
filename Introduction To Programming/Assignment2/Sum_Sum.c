#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    
    int sum_of_positive_number =0 ;
    int sum_of_negetive_number = 0;
    

    for(int i = 0; i<n; i++){
        if(v[i] > 0){
            sum_of_positive_number += v[i];
            
        }else if(v[i]<0){
            sum_of_negetive_number += v[i];
        }
    }
    printf("%d %d", sum_of_positive_number, sum_of_negetive_number);
    return 0;
}