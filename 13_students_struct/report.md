[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

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

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release 13_students_struct
[100%]: build ok!

```

## Execution
```
xmake run


  ME-A1
  Roll No. 2030015
  Ashish Sehgal
  _________________________________________________________

  Program to display student's information using structure.
  _________________________________________________________

  Name: Harsh
  Roll NO. 1234567
  Average marks= 20.20
  e-mail id: harsh22@gmail.com

  Name: Gurwinder
  Roll NO. 2345678
  Average marks= 18.70
  e-mail id: gurwinder17@gmail.com

  Name: Sundram
  Roll NO. 3456789
  Average marks= 22.50
  e-mail id: sundram35@gmail.com
  _________________________________________________________


```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
