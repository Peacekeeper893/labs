#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
// writing
    FILE *fp;
    fp=fopen("data.txt","a+");

    fputs("Hello world!",fp);
    fclose(fp);


// reading and searching
    FILE*fp2;
    fp2=fopen("The_Existing_File.txt","r");
    char word[50];
    char ch;

   char *search = "hale";
   int Hitptr = 0;
   int Wp = 0;
   

   do 
   {
      ch = fscanf(fp2, "%s", word); 
      if(strcmp(word, search) == 0)
        {     
         Hitptr++;
        }
        Wp++;
     
   } while (ch != EOF); 

    if(Hitptr == 0)  
        printf("'%s' not found in the file\n", search);
    else
        {
        printf("'%s' is found in the file", search);
        }
        
   fclose(fp2);

}