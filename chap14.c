// //prog 14_2
// #include <stdio.h>
// #include <stdlib.h>
// int i,num;
// int main(void)
// {
//     struct student
//     {
//         char name[10];
//         int math;
//     } *ptr;
//     printf("Number of student:\n");
//     scanf("%d",&num);
//     ptr=(struct student *) malloc(num*sizeof(struct student));
//     for (i=0;i<num;i++)
//     {
//         printf("Please enter No.%d student's name:\n",i+1);
//         scanf("%s",&(ptr+i)->name);
//         printf("Please enter No.%d student's grade:\n",i+1);
//         scanf("%d",&(ptr+i)->math);
//     }
//     for (i=0;i<num;i++)
//     {
//         printf("No.%d student's name is %s and math grade is: %d\n",i+1,(ptr+i)->name,(ptr+i)->math);
//     }
//     free(ptr);
// }

// //prog 14_3
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// typedef struct node Node;
// int main(void)
// {
//     Node a,b,c;
//     Node *ptr=&a;
//     a.data=12;
//     a.next=&b;
//     b.data=30;
//     b.next=&c;
//     c.data=64;
//     c.next=NULL;
//     while (ptr!=NULL)
//     {
//         printf("%p, %d, %p",ptr,ptr->data,ptr->next);
//         ptr=ptr->next;
//         printf("\n");
//     }
    
// }

//prog 14_4
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *ptr;
typedef struct node Node;
int main(void)
{
    int num,i;
    printf("Please enter the number of node:\n");
    scanf("%d",&num);
    ptr=(Node *) malloc(num*sizeof(Node));
    for (i=0;i<num;i++)
    {
        printf("Data of %d is:\n",i+1);
        scanf("%d",&((ptr+i)->data));
        if(i!=num-1)
        (ptr+i)->next=(ptr+i+1);
        else
        (ptr+i)->next=NULL;
    }
    while (ptr!=NULL)
    {
        printf("%p, %d, %p",ptr,ptr->data,ptr->next);
        ptr=ptr->next;
        printf("\n");
    }
    free (ptr);
}