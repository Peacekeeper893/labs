#include <stdio.h>


int main()
{
int array[5]={12,56,74,23,84};

int i;

//  Linear Search //

int target;

printf("Enter the Target element\n");
scanf("%d",&target);

for(i=1;i<5;i++)
{
    if(array[i]==target)
    {
        printf("Target found at %d index",i+1);
        break;
    
    }
}
if(i==5)
{
    printf("Target Not Found!!");
}

// Binary Search //
int low=0,high=5,mid;


while(low<=high)
{
mid=(low+high)/2;
if(array[mid]==target)
{
    printf("Target found at %d index",mid+1);
    break;
}

else if (array[mid]>target)
{
    high=mid-1;
}

else
{
    low=mid+1;
}

}

if(low>high)
{
     printf("Target Not Found!!");
}

return 0;


}




