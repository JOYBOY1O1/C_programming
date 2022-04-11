#include<stdio.h>
#include<math.h>
void main()
{
   int num,i=2;
   int FLAG=1;
   printf("Enter a Number : ");
   scanf("%d",&num);
   for(i;i<=sqrt(num);i++)
   {
      if(num%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      printf("%d is Prime Number",num);
   }
   else
   {
      printf("%d is not a Prime Number",num);
   }
   return;
}