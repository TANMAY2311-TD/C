#include<stdio.h>

int main(){

  int mark;
  printf("Enter your mark: ");
  scanf("%d", &mark );

    switch(mark) {

      case 80 ... 100:
        printf("Grade is A+");
      break;

      case 70 ... 79:
        printf("Grade is A");
      break;

      case 60 ... 69:
        printf("Grade is A-");
      break;

      case 50 ... 59:
        printf("Grade is B");
      break;

      case 40 ... 49:
        printf("Grade is C");
      break;

      case 33 ... 39:
        printf("Grade is D");
      break;

      case 00 ... 32:
        printf("Grade is F");
      break;

      }

   return 0;
}



