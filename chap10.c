// //HW10_2
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float num = 4.2f;
//     int a1=4, a2=12;
//     printf("num = %p\n", &num);
//     printf("a1 = %p\n", &a1);
//     printf("a2 = %p\n", &a2);
// }

// //HW10_6
// #include <stdio.h>
// #include <stdlib.h>
// void show(int,int,int *);
// int main(void)
// {   
//    int a=12,b=7,*ptr;
   
//    printf("a=%2d, b=%2d\n",a,b);
//    ptr=&a;
//    show(a,b,ptr);
//    *ptr=19;
//    show(a,b,ptr);
//    ptr=&b;
//    show(a,b,ptr);
//    b=16;
//    show(a,b,ptr);
//    *ptr=12;
//    show(a,b,ptr);
//    a=17;
//    show(a,b,ptr);
//    ptr=&a;
//    show(a,b,ptr);
//    a=b;
//    show(a,b,ptr);
//    *ptr=63;
//    show(a,b,ptr);
       
//    system("pause");
//    return 0;
// }

// void show(int a,int b,int *pt)
// {
//    printf("a=%2d, b=%2d, ",a,b);
//    printf("ptr=%p, *ptr=%2d\n",pt,*pt);
// }

// //HW10_7
// #include <stdio.h>
// #include <stdlib.h>
// void show(int, int, int *, int *);
// int main()
// {
//     int a=28, b=16, *ptr1, *ptr2;
//     ptr1=&b, ptr2 = &a;
//     show(a, b, ptr1, ptr2);
//     *ptr1=4;
//     show(a, b, ptr1, ptr2);
//     a=16;
//     show(a, b, ptr1, ptr2);
//     *ptr2=12;
//     show(a, b, ptr1, ptr2);
//     ptr2=ptr1;
//     show(a, b, ptr1, ptr2);
//     *ptr1=19;
//     show(a, b, ptr1, ptr2);
//     ptr1=&a;
//     show(a, b, ptr1, ptr2);
//     a=7;
//     show(a, b, ptr1, ptr2);
//     *ptr2=*ptr1;
//     show(a, b, ptr1, ptr2);
// }
// void show(int a, int b, int *ptr1, int *ptr2)
// {
//     printf("a=%d, b=%d, ptr1=%p, *ptr1=%d, ptr2=%p, *ptr2=%d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
// }

// //HW10_8
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float num=16.4f;
//     float *ptr=&num;
//     num = 8.0/3.0;
//     printf("ptr=%p, *ptr=%f", ptr, *ptr);
// }

// //HW10_9
// #include <stdio.h>
// #include <stdlib.h>
// void address(float *);
// int main()
// {
//     float pi=3.14;
//     float *ptr=&pi;
//     address(&pi);
//     address(ptr);
// }
// void address(float *a)
// {
//     printf("The number at %p is %.2f\n", a, *a);
// }

// //HW10_11
// #include <stdio.h>
// #include <stdlib.h>
// void add10(int*, int*);	
// int main(void)
// {
//     int a=3, b=5, *ptr1, *ptr2;	
//     ptr1=&a;
//     ptr2=&b;
//     add10(ptr1,ptr2);
//     printf("a=%d, b=%d\n",a,b);	
// }
// void add10(int* a,int* b)
// {
//     *a=*a+10;
//     *b=*b+10; 
// }

// //HW10_13
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//    int num[]={14,23,32,62,19};
//    int *p1,*p2;
//    p1=p2=num;
//    *p1++;
//    printf("*p1=%d\n",*p1);
//    (*p2)++;
//    printf("*p2=%d\n",*p2);
// }

// //HW10_15
// #include <stdio.h>
// #include <stdlib.h>
// void add(int *);
// int i;
// int main(void)
// {
//    int arr[5]={31,17,33,22,16};
//    add(arr);
//     for(i=0;i<=4;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
// void add(int *vector)
// {
//     for(i=0;i<=4;i++)
//     {
//         vector[i]+=10;
//     }
// }

// //HW10_15
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int arr[5]={31, 17, 33, 22, 16};
//     int *ptr;
//     ptr = arr;
//     for(int i=0;i<5;i++)
//     {
//         *ptr+=10;                
//         printf("%d ", *ptr);
//         *ptr++;
//         i++;
//     }
// }

// //HW10_18a
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char *ptr = "We are best friends.";
//     int i = 0;
//     while(*ptr != '\0')
//     {
//         i++;
//         *ptr++;
//     }
//     printf("There are %d char\n", i);
// }

// //HW10_18b
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char *ptr = "We are best friends.";
//     int count=0;
//     while(*ptr != '\0')
//     {
//         if(*ptr>=97 && *ptr<=122)
//         count++;
//         *ptr++;
//     }
//     printf("There are %d lower case char", count);
// }

// //HW10_20
// #include <stdio.h> 
// #include <stdlib.h>
// int main(void)
// {
//     int i, count=0;
//     char *ptr[3]={"Tom", "Lily", "James Lee"};
//     for(i=0;i<3;i++)
//     {
        
//         while(*ptr[i]!='\0')
//         {            
//             count++;
//             *ptr[i]++;
//         }
//     }
//     count+=i;
//     printf("The total char is %d", count);
// }

//HW10_25
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int arr[2][4]={{2,3,4,5},{6,7,8,9}};
    int i,j;

    printf("(a) arr=%p\n",arr);
    printf("(b) arr[0]=%p, arr[1]=%p\n",arr[0],arr[1]);
    printf("(c) arr+1=%p\n",arr+1);
    printf("(d) *(arr+0)=%p, ",*(arr+0));
    printf("*(arr+1)=%p\n",*(arr+1));

    printf("(e) *(arr+1)+0=%p, ",*(arr+1)+0);
    printf("*(arr+1)+1=%p\n",*(arr+1)+1);
    printf("    *(arr+1)+2=%p, ",*(arr+1)+2);
    printf("*(arr+1)+3=%p\n",*(arr+1)+3);

    printf("(f) *(*(arr+1)+0)=%d, ",*(*(arr+1)+0));
    printf("*(*(arr+1)+1)=%d\n",*(*(arr+1)+1));
    printf("    *(*(arr+1)+2)=%d, ",*(*(arr+1)+2));
    printf("*(*(arr+1)+3)=%d\n",*(*(arr+1)+3));

    system("pause");
    return 0;
}