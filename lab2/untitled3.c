#include <stdio.h>
#include <conio.h>


void swap(int* arr1,int n)
{

    int i,j,temp;
    for(i=0,j=n-1;j>i;i++,j--)
    {
        temp=arr1[i];
        arr1[i]=arr1[j];
        arr1[j]=temp;
    }
}


int main()
{
int i;
int arr1[10]={1,2,3,4,5,6,7,8,9,10};





printf("array before swapping");
for (i=0;i<10;i++ )
    printf(" %d ",arr1[i]);

swap(arr1,10);
printf("\n\n");
printf("array after swapping");
for (i=0;i<10;i++ )
    printf(" %d ",arr1[i]);




return 0;
}
