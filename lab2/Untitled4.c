#include <stdio.h>
#include <conio.h>


void swap(char* arr1,char* arr2,int n)
{

    int j,temp;
    for (j=0;j<n;j++ )
        {
            char temp=arr1[j];
            arr1[j]=arr2[j];
            arr2[j]=temp;
        }
}


int main()
{
int i;
char arr1[10];
char arr2[10];





printf("Enter first string: ");
gets(arr1);
printf("Enter second string: ");
gets(arr2);

swap(arr1,arr2,10);

printf("after swapping\n\n");

printf("First string is : %s\n",arr1);
printf("second string is : %s\n",arr2);





return 0;
}

