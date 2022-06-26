#include <stdio.h>
//Structure Declaration
struct Faculty
{
    char faculty_name[20];
    int id;
    char subject_code[20];
    char class_name[20];
};



int main()
{
//Structure initialisation

struct Faculty n[5];
for(int i=0;i<5;i++)
{
    printf("Enter Your name:\n ");
    scanf("%s",&n[i].faculty_name);
    printf("Enter Your id:\n ");
    scanf("%d",&n[i].id);
    printf("Enter Your subjct Code:\n ");
    scanf("%s",&n[i].subject_code);
    printf("Enter Your class name:\n ");
    scanf("%s",&n[i].class_name);

}

//printf("%s",n[1].subject_code);


//Sorting


for(int i=0;i<5;i++)
{

    for(int j=i+1;j<5;j++)
    {

        if(n[j].id<n[i].id)
        {
            struct Faculty temp;
            temp=n[j];
            n[j]=n[i];
            n[i]=temp;
        }
    }
}

for(int l=0;l<5;l++)
{

    printf("ID no. %d Name : %s Subject Code: %s ClassName: %s \n",n[l].id,n[l].faculty_name,n[l].subject_code,n[l].class_name);
}
return 0;


}




