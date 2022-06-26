#include <stdio.h>
#include <conio.h>
int main()
{

int arr[5],i;

for (i=0;i<5 ;i++ )
    {
        printf("Enter %d element:",i);
        scanf("%d",&arr[i] );
    }

int greatest=arr[0];
for (i=0;i<5 ;i++ )
    {
        if (arr[i]>greatest)
            greatest=arr[i];

    }

printf("The greatest element in the array is: %d",greatest);







return 0;
}
