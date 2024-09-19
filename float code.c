#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float z;
    printf("enter the value of x=");
    scanf("%d",&x);
    printf("enter the value of y=");
    scanf("%d",&y);
    z=(float)x/y;
    printf("z=%f",z);
    return 0;
}
