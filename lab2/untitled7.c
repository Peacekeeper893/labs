#include <stdio.h>
#include <conio.h>



int main()
{

int i,j,l;
int n;
int arr1[10];
int arr2[10];
int arr3[20];



// initialisation
printf("Ready\n");
printf("Enter the elements of the sorted first array: ");
for(l=0;l<10;l++)
{
    scanf("%d",&arr1[l]);
}
printf("Enter the elements of the sorted second array: ");
for(l=0;l<10;l++)
{
    scanf("%d",&arr2[l]);
}



// merging
int k=0;
i=0;
j=0;

while(i<=10 && j<=10)
{
    if(arr1[i]>arr2[j])
        {
            arr3[k++]=arr2[j++];
        }
    else if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];

    else
        {
            //will include same elements
            arr3[k++]=arr1[i++];
            arr3[k++]=arr2[j++];
            
        }
}
if(i>10)
{
  arr3[k++]=arr2[j++];  
}
else if(j>10)
{
  arr3[k++]=arr1[i++];  
}


//printing the merged array
for(i=0;i<20;i++)
{
    printf(" %d ",arr3[i]);
} 




// Finding the median
// since two arrays of similar size are merged together so the final array will have even number of elements
// Therefore the median is the average of the middle two terms

printf("\n The median is %d",(arr3[k/2]+arr3[k/2-1])/2);

return 0;
}
