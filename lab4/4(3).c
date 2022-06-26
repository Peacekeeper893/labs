#include <stdio.h>


int main()
{
int array[5]={12,56,74,23,84};
int arr_s[5];

for(int l=0;l<5;l++)
{
    arr_s[l]=array[l];
}

int j;
//insertion sort
for(int i=0;i<5;i++)
{

    int temp=array[i];
    j=i-1;

    while(j>=0 && array[j]>temp)
    {
        array[j+1]=array[j];
        j--;
    }

    array[j+1]=temp;


}

printf("By Insertion Sort\n");
for(int k=0;k<5;k++)
{
    printf("The %d element is: %d\n",k+1,array[k]);
}

//Selection Sort
int max;
for(int i=0;i<5;i++)
{
    max=i;
    for(j=i+1;j<5;j++)
    {
        if(arr_s[j]>arr_s[max])
        max=j;

    }


    if(max != i)
    {
        int temporary;
        temporary=arr_s[max];
        arr_s[max]=arr_s[i];
        arr_s[i]=temporary;
    }
}

printf("\nBy Selection Sort\n");
for(int k=0;k<5;k++)
{
    printf("The %d element is: %d\n",k+1,arr_s[k]);
}


return 0;


}




