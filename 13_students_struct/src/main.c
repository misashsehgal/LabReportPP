//Program to display student's information using structure.(Learning C).

#include <stdio.h> //header file
int main(void) //declaration of main function
{                                                                                                                                                                          
printf("\n  ME-A1\n  Roll No. 2030015\n  Ashish Sehgal\n"); //Coder's Introduction
printf("  _________________________________________________________\n\n  Program to display student's information using structure.\n  _________________________________________________________\n\n"); //program's name

struct student //declaration of data types in required structure  
{
char name[20];
int rollno;
float avgmarks; 
char emailaddress[50];
};

struct student s1={"Harsh", 1234567, 20.2,"harsh22@gmail.com"}; //structure of student1(1)
struct student s2={"Gurwinder", 2345678, 18.7,  "gurwinder17@gmail.com"}; //structure of student2(2)
struct student s3={"Sundram", 3456789, 22.5, "sundram35@gmail.com"}; //structure of student3(3)
 
printf("  Name: %s\n  Roll NO. %d\n  Average marks= %.2f\n  e-mail id: %s\n\n",s1.name, s1.rollno, s1.avgmarks, s1.emailaddress); //printing(1)
printf("  Name: %s\n  Roll NO. %d\n  Average marks= %.2f\n  e-mail id: %s\n\n",s2.name, s2.rollno, s2.avgmarks, s2.emailaddress); //printing(2)
printf("  Name: %s\n  Roll NO. %d\n  Average marks= %.2f\n  e-mail id: %s\n",s3.name, s3.rollno, s3.avgmarks, s3.emailaddress); //printing(3)

printf("  _________________________________________________________\n\n"); //printing

return 0; //termination
}
