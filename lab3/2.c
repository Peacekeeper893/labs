
#include <stdio.h>  
#include<stdlib.h> 

int main()  
{ 
// using double pointers for each matrix
int **ptr1, **ptr2, **ptr3; 
 
int row1, col1, row2, col2; 

int i, j, k; 
 
printf("\nEnter number of rows and columns for first matrix : "); 
scanf("%d %d", &row1, &col1);  

printf("\nEnter number of rows and columns for second matrix : "); 
scanf("%d %d", &row2 , &col2); 

if(col1 != row2) 
{ 
	printf("\nCannot multiply two matrices.");  
	exit;  
} 

// for input matrices
ptr1 = (int **) malloc(sizeof(int *) * row1);  
ptr2 = (int **) malloc(sizeof(int *) * row2); 
for(i=0; i<row1; i++) 
 	ptr1[i] = (int *)malloc(sizeof(int) * col1); 
for(i=0; i<row2; i++)  
 	ptr2[i] = (int *)malloc(sizeof(int) * col2);


// for output matrix
ptr3 = (int **) malloc(sizeof(int *) * row1); 
for(i=0; i<row1; i++)  
 	ptr3[i] = (int *)malloc(sizeof(int) * col2); 




printf("\nEnter elements of first matrix :\n");  
for(i=0; i< row1; i++) 
{ 
	for(j=0; j< col1; j++) 
	{ 
		printf("A[%d][%d] = ",i, j); 
		scanf("%d", &ptr1[i][j]); 
	} 
} 

printf("\nEnter elements of second matrix :\n"); 
for(i=0; i< row2; i++) 
{ 
	for(j=0; j< col2; j++) 
	{ 
		printf("B[%d][%d] = ",i, j); 
		scanf("%d", &ptr2[i][j]); 
	} 
} 


// logic for matrix multiplication
for(i=0; i < row1; i++) 
{ 
	for(j=0; j < col1; j++) 
	{ 
		ptr3[i][j] = 0; 
 		for(k=0; k<col2; k++)  
		ptr3[i][j] = ptr3[i][j] + ptr1[i][k] * ptr2[k][j]; 
	} 
} 



printf("\n\nResultant matrix :");  
for(i=0; i< row1; i++)  
{ 
	
	for(j=0; j < col2; j++) 	 
	printf("%d\t", ptr3[i][j]); 
    printf("\n"); 
} 
return 0; 
}