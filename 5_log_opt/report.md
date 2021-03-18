[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
├── main.c
└── main.c~

0 directories, 2 files
```

---


# src/main.c

```

/*
Exp_05
Program to Use Logical Operators. 
03-12-2020
*/
//Coded by: Ashish Sehgal 2030015 ME - A1

//Header File
#include <stdio.h>

//Declaration and Assignation
int a = 7, b = 9, c = 11, d = 13, e, f, g;

//Declaration of Main Function
int main (void)
{       
        printf("\n\
         ______________________________________________________\n\
        ");

        //coder's introduction
        printf("\n\
         ME-A1\n\
         Roll No. 2030015\n\
         Ashish Sehgal\
        "); 
        
        //Program's name
        printf("\n\
         _________________________________\
        ");
        printf("\n\
         Program to Use Logical Operators.\
        "); 
        printf("\n\
         _________________________________\n\
        ");

        //Tips to remember           
        printf("\n\
         Remember : 1 means True in Computer language.\n\
                    0 means False in Computer language.\n\
        ");

        printf("\n\
         ______________________________________________________\n\
        ");
        
        printf("\n\
         Let a = %d, b = %d, c = %d and d = %d\n\
        ", a, b, c, d);
        
        //logical AND (&&)
        e = (a == b) && (c != d);
        printf("\n\
         (a == b) && (c != d)\n\
         Result : %d when logical AND operator(&&) is operated.\n\
        ",e);

        //logical OR (||)
        f = (a > b) || (c < d);
        printf("\n\
         (a > b) || (c < d)\n\
         Result : %d when logical OR operator(||) is operated.\n\
        ",f);

        //logical NOT (!)
        g = ! ( (a >= b) && (c <= d) );
        printf("\n\
         ! ( ( a >= b) && (c <= d) )\n\
         Result : %d when logical NOT operator(!) is operated.\n\
        ",g);

        printf("\n\
         ______________________________________________________\n\n\
        ");

        //Termination
        return 0; 
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release rel.opt
[100%]: build ok!

```

## Execution
```
xmake run


         ______________________________________________________
        
         ME-A1
         Roll No. 2030015
         Ashish Sehgal        
         _________________________________        
         Program to Use Logical Operators.        
         _________________________________
        
         Remember : 1 means True in Computer language.
                    0 means False in Computer language.
        
         ______________________________________________________
        
         Let a = 7, b = 9, c = 11 and d = 13
        
         (a == b) && (c != d)
         Result : 0 when logical AND operator(&&) is operated.
        
         (a > b) || (c < d)
         Result : 1 when logical OR operator(||) is operated.
        
         ! ( ( a >= b) && (c <= d) )
         Result : 1 when logical NOT operator(!) is operated.
        
         ______________________________________________________

        
```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
