#include <stdio.h>
#include <conio.h>
int main()
{

int i,j;
char k;
for (i=0;i<5 ;i++ )
    {
        k='A';
        for (j=0;j<9 ;j++ )
            {
                if (j>=4-i && j<=4)
                    {printf("%c",k);
                        k++;}
                else if (j<=4+i && j>4)
                    {printf("%c",k-2);
                        --k;}
                else
                    printf(" ");
            }




        printf("\n");
    }










return 0;
}
