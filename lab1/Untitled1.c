#include <stdio.h>
#include <conio.h>
int main()
{
int n;
int i;
printf("Enter the value of n(>=0): ");
scanf("%d",&n );

int res=n;
if (n==0)
    res=1;
else
{
for (i=1;i<n ;i++ )
    res=res*i;
}

printf("%d",res);




return 0;
}
