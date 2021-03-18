[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
├── main.c
├── main.c~
└── main.c.save

0 directories, 3 files
```

---


# src/main.c

```

//coded by Ashish Sehgal, Roll no. 2030015, ME-A1
//Program to display name of books using structure.(Learning C).

#include <stdio.h> //header file
int main(void) //declaration of main function
{
 printf("\n  ME-A1\n  Roll No. 2030015\n  Ashish Sehgal\n"); //Coder's            Introduction
 printf("  _________________________________________________\n\n  Program to   display name of books using structure.\n  _________________________________________________\n\n"); //program's name
                                                                                    
 struct book //declaration of data types in required structure                   
 {
  char bookname[50];
  char authname[30];              
  char pubname[50]; 
  char price[10];
 };                                        

 struct book b1={"Programming in ANSI C", "E. Balagurusamy", "Mc Graw Hill  Education", "Rs.320"}; //structure of book1(1)
 struct book b2={"A Textbook of Engineering Mathematics", "N.P.Bali", "Laxmi  Publications", "Rs.460"}; //structure of book2(2)
 struct book b3={"Effective Tecnical Communication", "M.Ashraf Rizvi", "Mc  Graw Hill Education", "Rs.380"}; //structure of book3(3)
 
 printf("  Name: %s\n  Author: %s\n  Publication: %s\n  Price: %s\n\n",  b1.bookname, b1.authname, b1.pubname, b1.price); //printing(1)
 printf("  Name: %s\n  Author: %s\n  Publication: %s\n  Price: %s\n\n",  b2.bookname, b2.authname, b2.pubname, b2.price); //printing(2)
 printf("  Name: %s\n  Author: %s\n  Publication: %s\n  Price: %s\n",  b3.bookname, b3.authname, b3.pubname, b3.price); //printing(3)
 
 printf("  ____________________________________________\n\n"); //printing 

 return 0; //termination
}






```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release basic_struct
[100%]: build ok!

```

## Execution
```
xmake run


  ME-A1
  Roll No. 2030015
  Ashish Sehgal
  _________________________________________________

  Program to   display name of books using structure.
  _________________________________________________

  Name: Programming in ANSI C
  Author: E. Balagurusamy
  Publication: Mc Graw Hill  Education
  Price: Rs.320

  Name: A Textbook of Engineering Mathematics
  Author: N.P.Bali
  Publication: Laxmi  Publications
  Price: Rs.460

  Name: Effective Tecnical Communication
  Author: M.Ashraf Rizvi
  Publication: Mc  Graw Hill Education
  Price: Rs.380
  ____________________________________________


```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
