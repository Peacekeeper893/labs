#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int count=0;
struct Student
{
    char * name;
    int roll_no;
    int marks;
};

void add_student(struct Student *s)
{
    printf("Enter the name of the student: ");
    scanf("%s",&s->name);

    printf("Enter the roll_no of the student: ");
    scanf("%d",&s->roll_no);

    printf("Enter the marks of the student: ");
    scanf("%d",&s->marks);

    count++;
}

void display(struct Student *s)
{
    
        printf("Name is: %s\n",&s->name);
        printf("Roll no. is %d\n",s->roll_no);
        printf("Marks is %d\n",s->marks);
    
    
}
int main()
{
    // for upto 10 students
    struct Student *s;
    s=(struct Student *)malloc(10 * sizeof(struct Student));
    int menu;
    int flag=1;
    printf("To add a student: press 1\nTo display current data press 2\n0 to exit");
    while(flag==1  && count<10)
    {   
        printf("Enter your choice: ");
        scanf("%d",&menu);
        switch(menu)
        {
            case 1:
                {
                    add_student(&s[count]);
                    break;
                }
            case 2:
            {

                for (int i = 0; i < count; i++)
                {
                    display(&s[i]);
                }
                break;
            }
            case 0:
                flag=0;

        }

    }
    
   













return 0;
}