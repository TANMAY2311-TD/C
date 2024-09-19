#include<stdio.h>
struct student
{
    int reg ;
    char name[20];
    float marks;
};
int main()
{
    int i;
    struct student s[5];
    printf("Enter Students Record\n\n");

    for(i=0;i<5;i++)
    {
        printf("Enter sreg  : ");
        scanf("%d",&s[i].reg);
        printf("Enter sname : ");
        scanf("%s",&s[i].name);
        printf("Enter smarks : ");
        scanf("%f",&s[i].marks);
}
printf("Students Records\n\n");

for(i=0;i<5;i++)
    {
        printf("sreg: %d\n",s[i].reg);

        printf("sname: %s\n",s[i].name);

        printf("smarks: %f\n",s[i].marks);

        float smarks;

      if("smarks 80 =<&&>= 100")
        {
            printf("CGPA 5.00\n");
        }
        else
        {
            if("smarks 70 =<&&>= 79")
            {
              printf("CGPA 4.00\n");
            }
            else
            {
                if("smarks 60 =<&&>= 69")
                {
                    printf("CGPA 3.50\n");
                }
                else
                {
                    if("smarks 50 =<&&>= 59")
                    {
                        printf("CGPA 3.00\n");
                    }
                    else
                    {
                        if("smarks 40 =<&&>= 49")
                        {
                            printf("CGPA 2.00\n");
                        }
                        else
                        {
                            if("smarks 0 =<&&>= 39")
                            {
                                printf("CGPA Failed");
                            }
                        }
                    }
                }
            }
        }
    }



return 0;
}
