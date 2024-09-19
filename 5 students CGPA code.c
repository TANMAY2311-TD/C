#include <stdio.h>
#include <stdlib.h>

float cgpaCalc(int number);
int main()
{
int n;
printf("Enter the number of n: ");
scanf("%d", &n);
printf("\n");
int student[n][2];
for (int i = 0; i < n; i++)
{
printf("Enter registration number : ");
scanf("%d", &student[i][0]);
printf("Enter his/her mark : ");
scanf("%d", &student[i][1]);
printf("\n");
}
for (int i = 0; i < n; i++)
{
printf("Registration: %d CGPA: %.2f \n", student[i][0], cgpaCalc(student[i][1]));
}
return 0;
} float cgpaCalc(int number)
{
switch (number)
{
case 90 ... 100:
return 4.00;
case 80 ... 89:
return 3.50;
case 70 ... 79:
return 3.00;
case 60 ... 69:
return 2.50;
case 50 ... 59:
return 2.00;
case 0 ... 49:
return 0.00;
}
}
