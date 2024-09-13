// //prog 11_3
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     struct data
//     {
//         char name[10];
//         int math;
//     }student={"Mary Wang",74};
//     printf("Student name: %s\n", student.name);
//     printf("Student grade: %d\n", student.math);
// }

// //prog 11_7
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     struct data
//     {
//         char name[10];
//         int math;
//     }student[2];
//     for(int i=0;i<2;i++)
//     {
//         printf("Please enter student %d's name\n",i+1);
//         gets(student[i].name);
//         printf("Please enter student %d's math grade\n",i+1);
//         scanf("%d",&student[i].math);
//         fflush(stdin);
//     }
//     for(int i=0;i<2;i++)
//     {
//         printf("Student %d's name: %s\n",i+1, student[i].name);
//         printf("Student %d's math grade: %d\n",i+1, student[i].math);
//     }
// }

// //prog 11_8
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int i, m, index=0;
//     struct data
//     {
//         char name[10];
//         int math;
//     }student[3]={{"Mary",87},{"Flora",93},{"Jenny",74}};
//     m=student->math;
//     for(int i=1;i<3;i++)
//     {
//         if((student+i)->math > m)
//         {
//             m = (student+i)->math;
//             index=i;
//         }
//     }
//     printf("%s has maximum score, %d\n",(student+index)->name,m);
// }

// //prog 11_11
// #include <stdio.h>
// #include <stdlib.h>
// struct data
// {
//     char name[10];
//     int math;
// };
// void swap(struct data *, struct data *);
// int main(void)
// {
//     struct data s1={"Jenny",74};
//     struct data s2={"Teresa",88};
//     swap(&s1,&s2);
//     printf("s1.name:%s, s1.math:%d\n", s1.name, s1.math);
//     printf("s2.name:%s, s2.math:%d\n", s2.name, s2.math);    
// }
// void swap(struct data *s1, struct data *s2)
// {
//     struct data tmp;
//     tmp = *s1;
//     *s1 = *s2;
//     *s2 = tmp;
// }

// //HW 11_1
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     struct data
//     {
//         int num;     //size=4
//         char ch;     //size=1
//         double dist; //size=8
//     }aaa;
//     printf("Size of aaa is %d", sizeof(aaa));
// }

// //HW 11_2
// #include <stdio.h>
// #include <stdlib.h>
// struct date
// {
//     int year;
//     int month;
//     int day;
// };
// int main()
// {
//     struct date holiday = {2004,4,26};     
//     printf("The day of holiday is %d/%d/%d\n",holiday.year,holiday.month,holiday.day);
//     struct date festival;
//     printf("Give the year of festival\n");
//     scanf("%d",&festival.year);
//     printf("Give the month of festival\n");
//     scanf("%d",&festival.month);
//     printf("Give the day of festival\n");
//     scanf("%d",&festival.day);
//     printf("The day of festival is %d/%2d/%d",festival.year, festival.month, festival.day);
// }

// //HW 11_4
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     struct time
//     {
//         int hour;
//         int minute;
//         double second;
//     }start={12,32,25.49};
//     struct time end = {15,12,17.53};
//     printf("Start at %2d:%2d:%2.2f, end at %2d:%2d:%2.2f\n",start.hour,start.minute,start.second,end.hour,end.minute,end.second);
//     struct time elapse;
//     if (end.second >= start.second)
//     elapse.second = end.second-start.second;
//     else
//     {
//         end.minute-=1;
//         elapse.second = end.second+60.0-start.second;
//     }
//     if (end.minute >= start.minute)
//     elapse.minute = end.minute-start.minute;
//     else
//     {
//         end.hour-=1;
//         elapse.minute = end.minute+60-start.minute;
//     }
//     if (end.hour >= start.hour)
//     {
//         elapse.hour = end.hour-start.hour;
//         printf("Elapse time is %02d:%02d:%02.02f",elapse.hour,elapse.minute,elapse.second);
//     }    
//     else
//     {
//         printf("Something wrong\n");
//     }    
// }

// //HW 11_8
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     struct time
//     {
//         int hour;
//         int minute;
//         double second;
//     };
//     struct date
//     {
//         int year;
//         int month;
//         int day;
//         struct time hms;
//     };
//     struct date now = {2024,05,05,{17,18,30.00}};
//     printf("The time now is %4d/%02d/%02d %02d:%02d:%02.02f\n", now.year, now.month, now.day, now.hms.hour, now.hms.minute, now.hms.second);
//     printf("Size of now is %d\n", sizeof(now));
//     printf("Size of second is %d", sizeof(now.hms.second));
// }

// //HW 11_9
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     struct data
//     {
//         char name[10];
//         int math;
//     }student[5],*highest;
//     for(int i=0;i<5;i++)
//     {
//         printf("student%d name is:\n", i + 1);
//         scanf("%s", &student[i].name);
//         printf("student%d math score is:\n", i + 1);
//         scanf("%d", &student[i].math);
//     }
//     highest = &student[0];
//     for(int i=0;i<5;i++)
//     {
//         if (highest->math < student[i].math)
//         highest->math = student[i].math;
//     }
//     printf("%s got the highest score %d\n", highest->name, highest->math);
// }

// //HW 11_12
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     struct data
//     {
//         char name[10];
//         int math;
//     }student[2];
//     for(int i=0;i<2;i++)
//     {
//         printf("Please enter student %d's name\n",i+1);
//         gets((student+i)->name);
//         printf("Please enter student %d's math grade\n",i+1);
//         scanf("%d",&(student+i)->math);
//         fflush(stdin);
//     }
//     for(int i=0;i<2;i++)
//     {
//         printf("Student %d's name: %s\n",i+1, (student+i)->name);
//         printf("Student %d's math grade: %d\n",i+1, (student+i)->math);
//     }
// }

// //HW 11_14
// #include <stdio.h>
// #include <stdlib.h>
// struct data		
// {
//    char name[10];
//    int math;
// };
// void display(struct data);	
// int main(void)
// {
//    struct data s1={"Jenny",74}; 
//    display(s1);	
   
//    system("pause");
//    return 0;
// }
// void display(struct data st) 
// {
//    printf("學生姓名: %s\n",st.name);  
//    printf("數學成績: %d\n",st.math);
// }

// //HW 11_15
// #include <stdio.h>
// #include <stdlib.h>
// struct data		
// {
//     char name[10];
//     int math;
// };
// void add5(struct data *);	
// int main(void)
// {
//     struct data s1={"Jenny",74}; 
//     add5(&s1);   
//     system("pause");
//     return 0;
// }
// void add5(struct data *grade)
// {
//     (grade->math)+=5;
//     printf("Student name: %s\n",grade->name);  
//     printf("Math grade: %d\n",grade->math);
// }

// //HW 11_16
// #include <stdio.h>
// #include <stdlib.h>
// struct time
// {
//     int hour;
//     int minute;
//     double second;
// };
// void display(struct time);
// int main()
// {
//     struct time start={12,32,25.49};
//     struct time end = {15,12,17.53};
//     printf("Start at %2d:%2d:%2.2f, end at %2d:%2d:%2.2f\n",start.hour,start.minute,start.second,end.hour,end.minute,end.second);
//     struct time elapse;
//     if (end.second >= start.second)
//     elapse.second = end.second-start.second;
//     else
//     {
//         end.minute-=1;
//         elapse.second = end.second+60.0-start.second;
//     }
//     if (end.minute >= start.minute)
//     elapse.minute = end.minute-start.minute;
//     else
//     {
//         end.hour-=1;
//         elapse.minute = end.minute+60-start.minute;
//     }
//     if (end.hour >= start.hour)
//     {
//         elapse.hour = end.hour-start.hour;
//         printf("Elapse time is: ");
//         display(elapse);
//     }    
//     else
//     {
//         printf("Something wrong\n");
//     }
// }   
// void display(struct time a)
// {
//     printf("%02d:%02d:%02.02f\n",a.hour,a.minute,a.second);
// }

// // HW 11_18
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {   
//    enum boolean
//    {
//       FALSE,
//       TRUE
//    }test;
//    test=5<20;
//    if(test==TRUE)
//       printf("5<20 correct\n");
//    else
//       printf("5<20 incorrect\n");
                                                                                                                                  
//    system("pause");
//    return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // 提供 struct data 的完整定义
// struct data {
//     char name[10];
//     int math;
// };

// // 使用 #define 定义 SCORE 类型别名
// #define SCORE struct data

// // 声明 display 函数
// void display(SCORE);

// int main(void) {
//     // 使用 SCORE 类型别名来声明变量
//     SCORE s1 = {"Jenny", 74};
//     display(s1);
   
//     return 0;
// }

// // 定义 display 函数
// void display(SCORE st) {
//     printf("Student name: %s\n", st.name);
//     printf("Math grade: %d\n", st.math);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int removeElement(int* nums, int numsSize, int val) {
//     int time = 0;
//     for(int i = 0; i < numsSize; i++) {
//         if(nums[i] != val) {
//             nums[time] = nums[i];
//             time += 1;
//         }
//     }
//     return time;
// }

// int main() {
//     int nums[] = {3, 2, 2, 3};
//     int val = 3;
//     int numsSize = sizeof(nums) / sizeof(nums[0]);
//     int newSize = removeElement(nums, numsSize, val);
//     printf("New array size: %d\n", newSize);
//     printf("Remaining elements: ");
//     for (int i = 0; i < newSize; i++) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");
//     return 0;
// }

