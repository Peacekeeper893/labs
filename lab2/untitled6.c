#include <stdio.h>
#include <conio.h>



int main()
{
int i,j;
int n;
int arr[10];

printf("Ready\n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter the value of n:");
scanf("%d",&n);

for (i=1;i<n ;i++ )
{
    for (j=0;j<10 ;j++ )
    {
        if (i==arr[j])
            break;
    }
if (j==10)
    printf(" %d ",i);

}
return 0;
}
