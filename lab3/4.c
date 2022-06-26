#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int count=0;
struct Employee
{
    char * name;
    int emp_no;
    int Salary;
};

void add_Employee(struct Employee *s)
{
    printf("Enter the name of the Employee: ");
    scanf("%s",&s->name);

    printf("Enter the emp_no of the Employee: ");
    scanf("%d",&s->emp_no);

    printf("Enter the Salary of the Employee: ");
    scanf("%d",&s->Salary);

    count++;
}

void display(struct Employee *s)
{
    
        printf("Name is: %s\n",&s->name);
        printf("Emp no. is %d\n",s->emp_no);
        printf("Salary is %d\n",s->Salary);
    
    
}
int main()
{
    // for upto 10 Employees
    struct Employee *s;
    s=(struct Employee *)malloc(10 * sizeof(struct Employee));
    int menu;
    int flag=1;
    printf("To add a Employee: press 1\nTo display current data press 2\n0 to exit");
    while(flag==1  && count<10)
    {   
        printf("Enter your choice: ");
        scanf("%d",&menu);
        switch(menu)
        {
            case 1:
                {
                    add_Employee(&s[count]);
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