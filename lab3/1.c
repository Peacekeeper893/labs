#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

char * arr;
char * arr2;
arr=(char *)malloc(5*sizeof(char));

printf("Enter a string of upto 5 characters");

scanf("%s",arr);
printf("you entered %s",arr);
arr2=(char *)realloc(arr, 10*sizeof(char));

scanf("%s",&arr2);
printf("you entered %s",&arr2);
}