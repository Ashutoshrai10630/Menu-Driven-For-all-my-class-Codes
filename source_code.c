#include<stdio.h>
#include<stdlib.h>
#include"1.c"
#include"2.c"
#include"sm1.c"
#include"sm2.c"
#include"lab8.c"
#include"lab03.c"
#include"lab04.c"
#include"final.c"
int s2();
int s1();
int m2();
int  m1();
int l8();
int l_3();
int lab_4();
int fun1();
  int fun2();
   int fun3();
int main()
{
    int cc1;
    printf("                                                               ");
    printf("                                                               ");
    printf("                           \n         ");
    printf("-x--x--x--x--x--x--x--x--x--x- WelCome -x--x--x--x--x--x--x--x--x--x-");
    printf("                                                                        ");
    printf("\n\t\t\tName- ASHUTOSH RAI                                   ROLL-21051550\n");
    printf("                                                                \n");
    printf("Please choose the lab no you want to view:\n");
    printf("                                                                \n");
    while (1)
    {
    printf("\t1.LAB 1\n\t2.LAB 2\n\t3.LAB 3\n\t4.LAB 4\n\t5.LAB 5\n\t6.LAB 6 \n\t7.LAB 7\n\t8.LAB 8\n\t9.LAB 9\n\t10.LAB 10\n\t11.To exit the main menu\nEnter your choice \n");
    scanf("%d",&cc1);
         switch (cc1)
    {
        case 1:
        m1();
        printf("\n-------------------------------------------------------------------------------------\n");
        break;
        case 2:
        m2();
        printf("\n-------------------------------------------------------------------------------------\n");

        break;
        case 3:
        printf("\n---------------------------------------------------------------------------------------\n");
         l_3();
        break;
        case 4:
       lab_4();
       printf("\n---------------------------------------------------------------------------------------\n");
       break;
       case 5:
       fun1();
       printf("\n---------------------------------------------------------------------------------------\n");
       break;
        case 6:
        fun2();
        printf("\n---------------------------------------------------------------------------------------\n");
       break;
        case 7:
           fun3();
           printf("\n---------------------------------------------------------------------------------------\n");
       break;
      
        case 8:

        l8();
                printf("\n-------------------------------------------------------------------------------------\n");

        break;
        
    case 9:
     s1();
        printf("\n-------------------------------------------------------------------------------------\n");
        break;
     case 10:
     s2();
     printf("\n-------------------------------------------------------------------------------------\n");
        break;
        case 11:
        printf("  ------------ THANK YOU  -------------          ");
        exit(0);
    
    default:
        break;
    }

      }
      
}
