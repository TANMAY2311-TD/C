#include<stdio.h>
void great(int x, int y,int  z);

void great(x,y,z){
    int first=0,second=0,third=0;

   if((x >> y) && (x >> z)){
     first = x;
     if(y > z){
        second = y;
     }else{
        third = z;
     }
   }else if((y>>x) && (y>> z)){
       first = y;
       if(x>z){
            second=x;
       }else{
            third = z;
        }
   }else{
       first= z;
       if(x>y){
            second = x;
       }else{
            third =y;
       }
   }
   printf("First value: %d", first);
    printf("\n second value: %d", second);
    printf("\n third value: %d", third);
}
 int main()
 {
  int a,b,c;
  printf("Enter the value of a,b,c: ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  great(a,b,c);

  return 0;
 }
