#include <stdio.h>
void print(int n) {
    for(int i = 1; i<=n; i++) {
      if(i == n) {
            // যদি লুপ একদম শেষ সংখ্যায় পৌঁছায়, তাহলে শুধু সংখ্যাটি প্রিন্ট হবে (কোনো স্পেস ছাড়া)
            printf("%d", i);
        } else {
            // অন্যথায় সংখ্যার পর একটি স্পেস প্রিন্ট হবে
            printf("%d ", i);
        }
    }
}

int main () {
    int n;
    scanf("%d", &n);
print(n);
    return 0;
}