#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// To keep track of the number of students
int i = 0;

// A structure to store the student details
struct studentInfo
{
   char firstName[20];
   char lastName[20];
   int rollNumber;
   float CGPA;
   int courseId[10];
} st[500];

// Function to add student details
void addStudent()
{
   printf("Add the Student's Details\n\n");
   printf("Enter the first name of the student\n");
   scanf("%s", st[i].firstName);
   printf("Enter the last name of the student\n");
   scanf("%s", st[i].lastName);
   printf("Enter the roll number of the student\n");
   scanf("%d", &st[i].rollNumber);
   printf("Enter the CGPA of the student\n");
   scanf("%f", &st[i].CGPA);
   printf("Enter the course ID of each course of the student\n");
   for (int j = 0; j < 5; j++)
   {
      scanf("%d", &st[i].courseId[j]);
   }
   i = i + 1;
}


void Addstudentdetail()
{
   printf("here you can add student detail\n ");
   printf("enter the student first name \n");
   scanf("%s",&st[i].firstname);
   printf("enter the student last name\n");
   scanf("%s",&st[i].lastname);
   printf("enter the student roll number\n");
   scanf("%d",&st[i].rollnumber);
   printf("enter the student c.g.p.a \n");
   scanf("%u",&st[i].C.G.P.A);
   for (int j =0 ; j<5;j++)
   {
    scanf("%d",st[i].courseid[j]);
   }
i = i+1;

}

int main()
{
   int taskToPerform;
   while (1)
   {
      printf("Enter the task that you want to perform\n");
      printf("1. Add a new Student Detail\n");
      printf("8. Exit\n");
      scanf("%d", &taskToPerform);

      switch (taskToPerform)
      {
      case 1:
         addStudent();
         break;
      case 8:
         exit(0);
         break;
      default:
         exit(0);
      }
   }

   return 0;
}
