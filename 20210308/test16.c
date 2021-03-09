#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256


  int main() 
  {
        int lno, ctr = 0;
        char ch;
        FILE*fptr1, *fptr2;
		
        char str[MAX], temp[] = "test1rename.txt";
		printf("\n\n Delete a specific line from a file :\n");
		 
        fptr1 = fopen("test10.txt", "r");
        if (!fptr1) 
		{
                printf(" File not found or unable to open the input file!!\n");
                return 0;
        }
        fptr2 = fopen(temp, "w"); 
        if (!fptr2) 
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);
		
       
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno) 
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("test10.txt");  		
        rename(temp, "test10.txt"); 	
   fptr1=fopen("test10.txt","r"); 
            ch=fgetc(fptr1); 
          printf(" Now the content of the file %s is : \n","test10.txt"); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(fptr1); 
            }
        fclose(fptr1);

        return 0;

  } 