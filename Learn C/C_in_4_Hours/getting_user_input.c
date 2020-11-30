#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   double gpa;
   char grade;
   char name[20];
   char full_name[29];
   printf("Enter your age: "); 
   scanf("%d",&age);
   printf("Enter your gpa: ");
   scanf("%lf",&gpa);
   printf("Enter your letter grade: ");
   scanf(" %c",&grade);
   printf("What is your first name: ");
   scanf("%s",name);
   /* not working properly*/
   printf("What is your full name: ");
   fgets(full_name,29,stdin);
   printf("You are %d years old, your gpa is %f, and your letter grade is %c. Your first name is %s and your full name is %s",age,gpa,grade,name,full_name);
    
    return 0;
}