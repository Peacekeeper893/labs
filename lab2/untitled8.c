#include <stdio.h>
#include <conio.h>

void givestr(char matrix[3][3])
{
    // row wise
    char temp[3][4];
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           temp[i][j]=matrix[i][j];
           
       }
       temp[i][3]='\0';
    };

for(int l=0;l<3;l++)
printf("%s\n",temp[l]);

// column wise
printf("\n\n");
char tempo[3][4];
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            tempo[i][j]=matrix[j][i];
           
       }
       tempo[i][3]='\0';
     };
   

 for(int l=0;l<3;l++)
 printf("%s\n",tempo[l]);



}

int main()
{

char matrix[3][3];
int i,j;

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter the %d %d Element: ",i+1,j+1);
        fflush(stdin);
        scanf("%c",&matrix[i][j]);
        
    }
}

givestr(matrix);
return 0;
}
