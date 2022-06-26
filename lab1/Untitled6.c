#include <stdio.h>
#include <conio.h>


char * strndel(char *,int,int);
int main()
{

char original[80];
printf("Enter the original string: ");
gets(original);

int start,length;
printf("Enter the value of start and length:\n");
scanf("%d %d",&start,&length );
char *res;

res=strndel(original,start,length);
printf("%s",res);

return 0;
}


char * strndel(char *original, int start,int length)
{
int len,i;
for (len=0;original[len]!='\0' ;len++ );

for (i=start+length;i<len ;i++ )
    {
        original[i-length]=original[i];
    }
original[len-length]='\0';
return original;
}
