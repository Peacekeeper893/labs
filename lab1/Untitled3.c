#include <stdio.h>
#include <conio.h>
int main()
{
int n,i;
printf("Enter any number: ");
scanf("%d",&n );

for (i=2;i<n/2 ;i++ )
    {
        if(n%i==0)
        {
            printf("Not prime");
            break;
        }
    }

if (i==n/2)
    printf("Prime number");;


return 0;
}
