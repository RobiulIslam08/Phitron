#include <stdio.h>
#include <string.h>

int main () {
    char s1[22];
    char  s2[22];
    scanf("%s",s1);
    scanf("%s",s2);
    int compare = strcmp(s1,s2);
   if(compare <0 ){
    printf("%s", s1);
   }
    return 0;
}