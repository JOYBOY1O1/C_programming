#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
   int SIZE=250;
   
   char ch;
   char s[SIZE];
   char sen[SIZE];
   
   scanf("%c ", &ch);
   scanf("%s ", s);
   fgets(sen, SIZE, stdin);
   
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}