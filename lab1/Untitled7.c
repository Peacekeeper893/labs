#include <stdio.h>
#include <conio.h>


char * strdel(char *, char);
int main()
{

char original[80];
printf("Enter the original string: ");
gets(original);

char ch;
scanf("%c",&ch);

char *res;
res=strdel(original,ch);
printf("%s",res);


return 0;
}
char * strdel(char *original,char ch)
{
    int i,j;
    int len;
    for (len=0;original[len]!='\0' ;len++ )
        ;
    for (i=0;original[i]!=ch ;i++ )
        ;
    for (j=i+1;j<=len ;j++ )
        original[j-1]=original[j];

return original;

}
