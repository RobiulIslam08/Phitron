#include <stdio.h>
#include <limits.h>

int maximum(int a[], int n, int i){

    if(i == n-1){
        return a[i];
    }
     int max_of_rest =  maximum(a,n,i + 1 ); // যখন এই লাইনে প্রথম আসতেছে তখন  int max_of_rest এইটাতে কত value sotre হচ্ছে?
   
    if(a[i]> max_of_rest) {
       return a[i];
    }else{
        return max_of_rest;
    }
  
  

}
int main () {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int ans =  maximum(a, n, 0);
    printf("%d", ans);

    return 0;
}