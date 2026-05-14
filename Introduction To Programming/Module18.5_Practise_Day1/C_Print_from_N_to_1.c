// #include <stdio.h>

// void print_num (int n, int i){
//     if(i>n) {
//         return;
//     }
  
//     print_num(n, i+1);
//     printf("%d", i);
//     if(n>1) {
//         printf(" ");
//     }
// }
// int main () {
//     int n;
//     scanf("%d", &n);
    
//     print_num(n, 1);
//     return 0;
// }
#include <stdio.h>

void printDescending(int n)
{
    // Base case
    if (n == 0)
        return;

    // Print current number
    printf("%d", n);

    // Print a space only if more numbers remain
    if (n > 1)
        printf(" ");

    // Recursive call
    printDescending(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printDescending(n);

    return 0;
}