// //prog 8_9
// #include <stdio.h>
// #include <stdlib.h>
// double Leibniz(int);
// double power(double, int);
// int main()
// {
//     int t;    
//     printf("Please enter the number of iteration time\n");
//     scanf("%d",&t);
//     printf("Leibniz(%d) = %12.10f",t,Leibniz(t));
// }
// //迴圈寫法
// // double power(double a, int b)
// // {
// //     int i;
// //     double pow = 1;
// //     for(i=1;i<=b;i++)
// //     {
// //         pow *= a;
// //     }
// //     return pow;
// // }
// //遞迴寫法
// double power(double a, int b)
// {
//     if (b==0)
//     return 1;
//     else 
//     return (a*power(a, b-1)); 
// }
// double Leibniz(int t)
// {
//     int i;
//     double ans = 0;
//     for(i=1;i<=t;i++)
//     {
//         ans += power((-1),(i-1)) / (2*i-1);
//     }
//     ans*=4;
//     return ans;
// }

// HW8-1
// #include <stdio.h>
// void kitty(void);
// int main()
// {
//     kitty();
// }
// void kitty(void)
// {
//     printf("Hello Kitty");
//     return;
// }

// // HW8-3
// #include <stdio.h>
// int x;
// int cub(int x);
// int main()
// {
//     printf("Please enter a number to get it's cube\n");
//     scanf("%d",&x);
//     cub(x);
// }
// int cub(int x)
// {
//     int a;
//     a = x*x*x;
//     printf("%d",a);
//     return a;
// }

// // HW8-7
// #include <stdio.h>
// int n,t,x;
// int num=2;
// int prime(int check);
// int main()
// {
//     printf("Please enter which prime number you want\n");
//     scanf("%d",&n);
//     while(x<100)
//     {
//         if(prime(num))
//         {
//             x++;
//         }        
//         num++;
//     }
//     printf("The answer is %d",num-1);
// }
// int prime(int check)
// {
//     int i;
//     for(i=2;i<=(check/2);i++)
//     {
//         if(check%i==0)
//         return 0;        
//     }
//     return 1;
// }

// // HW8-12
// #include <stdio.h>
// int n;
// int power(int a,int b);
// double my_fun(int n);
// int main()
// {
//     printf("Please enter a number range from 2~6\n");
//     scanf("%d",&n);
//     printf("The answer is %lf",my_fun(n));
// }
// double my_fun(int n)
// {
    // double sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum += (1.0/(power(2,i)));//若用1去除會為0
    //     printf("sum is %lf\n",sum);
    // }
    // printf("sum is %lf\n",sum);
    // return sum;
// }
// int power(int a,int b)
// {
//     int multiple=1;
//     for(int i=1;i<=b;i++)
//     {
//         multiple*=a;
//     }
//     printf("multiple is %d\n",multiple);
//     return multiple;
// }

// // HW8-14
// #include <stdio.h>
// int n;
// double x;
// double power(double a,double b);
// double factorial(int c);
// double my_fun(double x,int n);
// int main()
// {
//     printf("Please enter number of x and n\n");
//     scanf("%lf%d",&x,&n);
//     printf("The answer is %10.8f\n",my_fun(x,n));
// }
// double my_fun(double x,int n)
// {
//     double sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum += power(x,i)/factorial(i);
//         printf("sum = %10.8f\n",sum);
//     }    
//     return sum;
// }
// double factorial(int c)
// {
//     int multiple=1;
//     for(int i=1;i<=c;i++)
//     {
//         multiple*=i;
//         printf("factorial = %d\n",multiple);
//     }
//     return multiple;
// }
// double power(double a,double b)
// {
//     double i =1.0;
//     double multiple=1.0;
//     for(i=1;i<=b;i++)
//     {
//         multiple*=a;
//         printf("power = %10.8f\n",multiple);
//     }
//     return multiple;
// }

// // HW8-16
// #include <stdio.h>
// int n;
// int find_k(int n);
// int main()
// {
//     printf("Please enter a number\n");
//     scanf("%d",&n);
//     printf("The answer is %d",find_k(n));
// }
// int find_k(int n)
// {
//     int i=0;
//     int k=0;
//     int ans =0;
//     while ((n-((4*k)+2))>4)
//     {
//         k++;
//     }
//     if (((4*k)+2-n) >= (n-(4*(k-1))+2))
//     ans = k-1;
//     else 
//     ans = k;
// }

// // HW8-18
// #include <stdio.h>
// int i,ans;
// int a=1;
// int b=1;
// int main()
// {
//     printf("fib(1)=1\n");
//     printf("fib(2)=1\n");
//     for(i=3;i<=10;i++)
//     {
//         ans = a+b;
//         a=b;
//         b=ans;
//         printf("fib(%d)=%d\n",i,ans);
//     }
// }

// // HW8-23
// #include <stdio.h>
// int i,n;
// int iter(int n);
// int main()
// {
//     printf("Please enter a number\n");
//     scanf("%d",&n);
//     printf("f(%d) = %d",n,iter(n));
// }
// int iter(int n)
// {
//     if(n==0)
//     return 3;
//     else
//     return 2*(iter(n-1))-5;
// }

// // HW8-24
// #include <stdio.h>
// #include <stdlib.h>
// static int n;
// void counter(void);
// int main()
// {
//     counter();
//     counter();
// }
// void counter(void)
// {
//     n++;
//     printf("counter() has been called %d times\n",n);
// }

// // HW8-27
// #include <stdio.h>
// #include <stdlib.h>
// int i,count,ans;
// int count_loop;
// int fib(int a);
// int main()
// {
//     for(i=1;i<=30;i++)
//     {
//         count = 0;
//         if (i==1||i==2)
//         count_loop=1;
//         else
//         count_loop=i;
//         printf("n = %d, loop %d times, iteration %d times \n",i,count_loop,fib(i));
//     }
// }
// int fib(int a)
// {
//     count++;
//     if (a==1||a==2)
//     ans = 1;
//     else
//     ans = fib(a-1)+fib(a-2);
//     return count;
// }

// HW8-31
#include <stdio.h>
#include <stdlib.h>
#define f(x) 4*x*x+6*x-5
int main()
{
    printf("f(1.0) = %lf\n",f(1.0));
    printf("f(2.2) = %lf\n",f(2.2));
    printf("f(3.14) = %lf\n",f(3.14));
}
