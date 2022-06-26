#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int count=0;
struct Faculty
{
    char * name;
    int Faculty_ID;
    char * subjectCode;
    char * classname;
};

void add_Faculty(struct Faculty *s)
{
    printf("Enter the name of the Faculty: ");
    scanf("%s",&s->name);

    printf("Enter the Faculty_ID of the Faculty: ");
    scanf("%d",&s->Faculty_ID);

    printf("Enter the subjectCode of the Faculty: ");
    scanf("%s",&s->subjectCode);

    printf("Enter the className of the Faculty: ");
    scanf("%s",&s->classname);

    count++;
}

void display(struct Faculty *s)
{
        printf("Name is: %s\n",&s->name);
        printf("Faculty_ID is %d\n",s->Faculty_ID);
        printf("subjectCode is %s\n",&s->subjectCode);
        printf("className is %s\n",&s->classname);
}
int main()
{
    // for upto 10 Faculty members
    struct Faculty *s;
    s=(struct Faculty *)malloc(10 * sizeof(struct Faculty));
    int menu;
    int flag=1;
    printf("To add a Faculty: press 1\nTo display current data press 2\n0 to exit");
    while(flag==1  && count<10)
    {   
        printf("Enter your choice: ");
        scanf("%d",&menu);
        switch(menu)
        {
            case 1:
                {
                    add_Faculty(&s[count]);
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