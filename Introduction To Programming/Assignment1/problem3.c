#include <stdio.h>

// You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.
 int main(){
  int N;
  scanf("%d", &N);
  if(N % 3 ==0){
    printf("YES");
    
  }
  else{
    printf("NO");
  }
}