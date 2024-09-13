//HW7-3
// #include <stdio.h>
// int main(void)
// {
//     int i,t;
//     int sum=0;
//     printf("Please enter a odd number, we will calculate 1+3+...+n\n");
//     scanf("%d", &t);
//     for(i=1;i<=(t+1)/2;i++)
//     {
//         sum+=i;
//     }
//     printf("1+3+...+%d = %d\n",t,sum);
// }

// HW7-6
// #include <stdio.h>
// int main(void)
// {
//     int i,n;
//     printf("Give a number to get it's common factor\n");
//     scanf("%d",&n);
//     printf("These are common factor of n\n");
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         printf("%d ",i);
//     }
// }

// HW7-9
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int i,n;
//     int t=1;
//     int sum=0;
//     printf("Give a number, you will get 1^2-2^2+3^2-...+(n-1)^2-n^2\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         sum += t*pow(i,2);        
//         t*=-1;
//     }
//     printf("1^2-2^2+3^2-...+%d^2-%d^2 = %d\n",n-1,n,sum);
// }

// HW7-13
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int n;
//     int sum=0;
//     int i=0;
//     printf("Give a positive even number, you will get 2+4+...+n\n");
//     scanf("%d",&n);  
//     while(n%2!=0||n<=0)
//     {
//         printf("Give a positive even number\n");
//         scanf("%d",&n);  
//     }
//     while(i<=n)
//     {        
//         sum += i;        
//         i+=2;
//     }
//     printf("2+4+...+%d = %d\n",n,sum);
// }

// HW7-13
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int n;
//     int sum=0;
//     int i=0;
//     printf("Give a positive even number, you will get 2+4+...+n\n"); 
//     do
//     {
//         printf("Give a positive even number\n");
//         scanf("%d",&n);  
//     }
//     while(n%2!=0||n<=0);
//     do
//     {        
//         sum += i;        
//         i+=2;
//     }
//     while(i<=n);
//     printf("2+4+...+%d = %d\n",n,sum);
// }

// HW7-26
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);            
//         }
//         printf("\n");
//     }
// }

// HW7-28
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int i=1;
//     int j=1;
//     printf("Give a multiplication table\n"); 
//     do
//     {
//         do
//         {
//         printf("%d ",i*j);
//         j++;
//         }
//         while(j<=9);
//         j=1;
//         printf("\n");
//         i++;
//     }
//     while(i<=9);
// }

// HW7-29
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//    int input,cnt=0,passwd=6128;
   
//    while(1)
//    {
//       printf("Please enter password: ");
//       scanf("%d", &input);
//       cnt++;
//       if(input==passwd)
//       {        
//         printf("Password correct, welcome to use this system");
//         break;
//       }
//       if(input!=passwd&&cnt>=3)
//       {        
//         printf("You had already tried three times");
//         break;
//       }      
//    }
// }

// HW7-31
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    printf("These are the number that can be devided by 2 and 3 but cannot be devided by 12\n");
    for(i=1;i<=100;i++)
    {
        if(i%2!=0 || i%3!=0 || i%12==0)
        continue; //回到迴圈開始處
        printf("%d ",i);
    }
   
}