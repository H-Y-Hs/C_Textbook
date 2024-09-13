// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     FILE *fptr;
//     char ch;
//     int count = 0;
//     fptr = fopen("output_prog12_1.txt","r");
//     if (fptr!=NULL)
//     {
//         while ((ch = fgetc(fptr)) != EOF)
//         {
//             printf("%c",ch);
//             count++;
//         }
//         printf("\n");
//         fclose(fptr);
//         printf("The total number of words is %d\n",count);
//     }
//     else
//     {
//         printf("fail");
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     FILE *fptr;
//     char ch[5];
//     int count = 0;
//     fptr = fopen("output_prog12_1.txt","r");
//     if (fptr!=NULL)
//     {
//         while (fgets(ch,5,fptr) != NULL)
//         {
//             printf("%s",ch);
//             count++;
//         }
//         printf("\n");
//         fclose(fptr);
//         printf("The total number of words is %d\n",count);
//     }
//     else
//     {
//         printf("fail");
//     }
// }

/* prog12_5, �ƻs�ɮפ��e */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define SIZE 512     
int main(void)
{
   char buffer[SIZE];
   int f1,f2,bytes;

   f1=open("chap12_9.txt",O_RDONLY|O_TEXT);
   f2=creat("chap12_9_output.txt",S_IWRITE);
	
   if((f1!=-1)&&(f2!=-1))		
   {
      while(!eof(f1))			
      {
         bytes=read(f1,buffer,SIZE);	
         write(f2,buffer,bytes);		
      }
      close(f1);	
      close(f2);
      printf("File open successively!!\n");
   }
   else
      printf("File open failed!!\n");
   
   system("pause");
   return 0;
}

