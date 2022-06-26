#include <stdio.h>
#include <conio.h>


void swap(int* arr1, int* arr2)
{

    int j;
    for (j=0;j<10;j++ )
        {
            int temp=arr1[j];
            arr1[j]=arr2[j];
            arr2[j]=temp;
        }
}


int main()
{
int i;
int arr1[10]={1,2,3,4,5,6,7,8,9,10};
int arr2[10]={11,12,13,14,15,16,17,18,19,20};


swap(arr1,arr2);

printf("First array after swapping");
for (i=0;i<10;i++ )
    printf(" %d ",arr1[i]);
printf("\n\n");
printf("Second array after swapping");
for (i=0;i<10;i++ )
    printf(" %d ",arr2[i]);




return 0;
}
