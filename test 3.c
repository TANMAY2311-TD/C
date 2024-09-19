#include<stdio.h>

 int main()
 {
  int mark;
  printf("Enter your mark: ");
  scanf("%d", & mark );

   if(mark>00== mark<33)
   {
    printf("Grade is %d, F");
   }
   else if(mark>=33 && mark<=39)
   {
    printf("Grade is %d, D");
   }
   else if(mark>=40 && mark<=49)
   {
     printf("Grade is %d, C");
   }
   else if(mark>=50 && mark<=59)
   {
    printf("Grade is %d, B");
   }
   else if(mark>=60 && mark<=69)
   {
    printf("Grade is %d, A-");
   }
   else if(mark>=70 && mark<=79)
   {
    printf("Grade is %d, A");
   }
   else if(mark>=80 && mark<=100)
   {
    printf("Grade is %d, A+");
   }

   return 00;

   }
