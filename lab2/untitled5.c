#include <stdio.h>
#include <conio.h>

int count=0;

int main()
{
int i;
int arr[10];

printf("Ready\n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}

for(int j=0;j<10;j++)
{
    for(i=j+1;i<10;i++)
    {
        if(arr[j]==arr[i])
        break;
    }

    if(i==10)
        count++;
}

printf("  %d  ",count);
return 0;
}
