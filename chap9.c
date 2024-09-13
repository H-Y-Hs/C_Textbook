// #include <stdio.h>
// #include <stdlib.h>
// #define size 5
// void bubble(int a[]);
// int main(void)
// {
//     int data[size] = {26,5,81,7,63};
//     bubble(data);
//     for (int i=0;i<=(size-1);i++)
//     {
//         printf("%d ",data[i]);
//     }
    
// }
// void bubble(int a[])
// {
//     int t;
//     for (int i=3;i>=1;i--)
//     {
//         for (int j=0;j<=i;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 t = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = t;
//             }
//         }        
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define size 5

// int data[size];

// void bubble(int a[]);

// int main(void)
// {
//     data[size] = {26, 5, 81, 7, 63};
//     bubble(data);
//     return 0;
// }

// void bubble(int a[])
// {
//     int t;
//     for (int i = size - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 t = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }

//     // Print sorted array
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// //HW 9-1
// #include <stdio.h>
// #include <stdlib.h>
// #define size 6
// int main()
// {
//     int arr[size];
//     int i;
//     for (i=0;i<=4;i++)
//     {
//         arr[i]=i+1;
//     }
//     for (i=0;i<=4;i++)
//     {
//         printf("arr[%d] = %d\n",i,arr[i]);
//     }   
// }

// //HW 9-9
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i,j,sale[2][4],add,sum=0;
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             printf("No.%d salesman's record in No.%d season ",i+1,j+1);
//             scanf("%d",&sale[i][j]);
//         }
//     }
//     printf("------Output------\n");
//     for(j=0;j<4;j++)
//     {
//         add=0;
//         for(i=0;i<2;i++)
//         {
//             add += sale[i][j];            
//         }
//         sum+=add;
//         printf("The total record of two salesman in each four season are %d\n",add);
//     }
//     printf("The total record of two salesman in four season are %d\n",sum);
// }

// //HW 9-13
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i,j,sale[3][5],salesman_earn[3],product[5],add_man,add_product,sum=0;
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             printf("No.%d salesman's sales No.%d product earn ",i+1,j+1);
//             scanf("%d",&sale[i][j]);
//             if(j==0)
//             {
//                 sale[i][j]*=12;
//             }            
//             else if(j==1)
//             {
//                 sale[i][j]*=16;
//             }
            
//             else if(j==2)
//             {
//                 sale[i][j]*=10;
//             }
//             else if(j==3)
//             {
//                 sale[i][j]*=14;
//             }
//             else
//             {
//                 sale[i][j]*=15;
//             }
//         }
//     }
//     printf("------Output------\n");
//     int best_seller_earn,best_seller_index; 
//     for(i=0;i<3;i++)
//     {
//         add_man=0;               
//         for(j=0;j<5;j++)
//         {
//             add_man+=sale[i][j];            
//         }
//         salesman_earn[i]=add_man;
//         int max=salesman_earn[0];
//         printf("Salesman no.%d's earn %d\n",i+1,add_man);
//         if(add_man>max)
//         best_seller_index = i+1;
//         else
//         best_seller_index = best_seller_index;
//     }
//     int max_sale,max_sale_index = 0;
//     for(j=0;j<5;j++)
//     {
//         add_product=0;
//         for(i=0;i<3;i++)
//         {
//             add_product += sale[i][j];            
//         }
//         product[j]=add_product;
//         max_sale=product[0];
//         printf("Product no.%d's earn %d\n",j+1,add_product);
//         if(add_product>max_sale)
//         max_sale_index = j+1;
//         else
//         max_sale_index = max_sale_index;
//     }
//     printf("Best seller is %d\n",best_seller_index);
//     printf("The product saled most is %d\n",max_sale_index);
// }

// //Hw9_16
// int i,j,k;
// int rgb[3][4][5] ={{{247, 67, 32,187,240},
//                     {122, 41, 21, 16,154},
//                     { 52, 35, 79, 21, 93},
//                     { 27, 22, 35,154, 75}},
//                     {{ 14,145,132, 25, 40},
//                     {212,221,121, 54, 14},
//                     {132,235,178, 19, 14},
//                     {122,122,133, 54, 47}},
//                     {{ 17, 44, 32,127,240},
//                     { 22,231, 21,156,124},
//                     { 32, 35, 78, 21,194},
//                     {127, 22, 33, 54, 45}}};
// int main()
// {
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             for(k=0;k<5;k++)
//             {
//                 printf("%d ",rgb[i][j][k]);
//             }
//             printf("\n");
//         }
//     }
// }

// //HW9_18
// #include <stdio.h>
// #include <stdlib.h>
// int arr[5]= {34,26,55,13,21};
// int min_index =1;
// int i = 0;
// int idx(int arr[]);
// int main(void)
// {
//     printf("The minimum amount in arr is %d\n",idx(arr));
// }
// int idx(int arr[])
// {
//     int min = arr[0];
    
//     for(i=1;i<5;i++)
//     {
//         if(arr[i]<min)
//         {
//             min_index = i+1;
//             min=arr[i];
//         }        
//         else
//         min_index = min_index;
//     }
//     return min_index;
// }

// //HW9_21
// #include <stdio.h>
// #include <stdlib.h>
// #define ROW 4
// #define COL 2
// double average(int arr[ROW][COL]);
// int arr[ROW][COL] = {{12,21},
//                      {31,23},
//                      {51,22},
//                      {17,29}};
// int sum;
// double avg;
// int main()
// {    
    
//     printf("Average of arr = %5.3f\n",average(arr));
// }
// double average(int arr[ROW][COL])
// {
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    // }
//     printf("Sum = %d\n",sum);
//     avg = (double)(sum/ROW)/COL;
//     return avg;
// }

// //HW9_22
// #include <stdio.h>
// #include <stdlib.h>
// #define ROW 4
// #define COL 2
// int A[ROW][COL] = {{12,21},
//                    {31,23},
//                    {51,22},
//                    {17,29}};
// int B[ROW][COL] = {{1,1},
//                    {1,1},
//                    {1,1},
//                    {1,1}};
// int C[ROW][COL];
// void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]);
// int main()
// {
//     add(A,B,C);
// }
// void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL])
// {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             C[i][j]=A[i][j]+B[i][j];
//             printf("%d ",C[i][j]);
//         }
//         printf("\n");
//     }
// }

// //HW9_23
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char str[]="Hello C language";
//     printf("Size of the sentence is %d",sizeof(str));
// }

// //HW9_26
// #include <stdio.h>
// #include <stdlib.h>
// int length(char str[]);
// int main()
// {
//     char str[100];
//     puts("Please enter a setence");
//     gets(str);
//     printf("The length of the sentence is:%d",length(str));//這邊不能用puts
// }
// int length(char str[])
// {
//     int i,l;
//     while(str[i++]!='\0')
//     l++;
//     return l;
// }

// //HW9_29
// #include <stdio.h>
// #include <stdlib.h>
// int i,j;
// int main()
// {
//     char arr[3][11]={"C language","C++","Java"};
//     for(i=0;i<3;i++)
//     {
//         puts(arr[i]);    
//     }    
// }

//HW9_31
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
int main(void)
{   
   char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
   char arr2[MAX][LENGTH];
   int i,j;
   
   for(i=0;i<MAX;i++)
      for(j=0;j<LENGTH;j++)
         arr2[i][j]=arr1[i][j];
      
   for(i=0;i<MAX;i++)
      printf("arr2[%d]=%s\n",i,arr2[i]);  
       
   system("pause");
   return 0;
}