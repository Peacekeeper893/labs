#include <stdio.h>
#include <conio.h>

void reverse(int* matrix,int m,int n)
{
    int i,j,k;
    int temp;
    for (k=0;k<m ;k++ )
        {
            for(i=0,j=n-1;j>i;i++,j--)
                    {
                        temp=*((matrix+k*n)+i);
                        *((matrix+k*n)+i)=*((matrix+k*n)+j);
                        *((matrix+k*n)+j)=temp;
                    }
        }
printf("Matrix After The Operation looks like:\n");

for (i=0;i<m ;i++ )
    {
        for (j=0;j<n ;j++ )
           {
             printf("%d ",*(matrix+i*n+j));

           }
        printf("\n");
    }


}

int main()
{
int i,j;
int m,n;
printf("Enter the dimensions of the matrix:");
scanf("%d %d",&m,&n);
int matrix[m][n];

for (i=0;i<m ;i++ )
    {
        for (j=0;j<n ;j++ )
            scanf("%d",&matrix[i][j] );
    }
reverse(matrix,m,n);

return 0;
}
