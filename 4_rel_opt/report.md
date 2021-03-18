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
Exp_04   
Program to Use Relational Operators. 
03-12-2020
*/       
//Coded by: Ashish Sehgal 2030015 ME - A1
        
//Header File
#include <stdio.h> 
         
//Assignation and Declaration
int a = 7, b = 11;
int c, d, e, f, g, h;
        
//Declaration of Main Function
int main (void)  
{       
        printf("\n\
         ___________________________________________________\
____________\n\
        ");
        
        //coder's introduction
        printf("\n\
         ME-A1\n\
         Roll No. 2030015\n\
         Ashish Sehgal\
        ");
        
        //Program's name
        printf("\n\
         ____________________________________\
        ");
        printf("\n\
         Program to Use Relational Operators.\
        "); 
        printf("\n\
         ____________________________________\n\
        ");
         
        //Tips to remember           
        printf("\n\
         Remember : 1 means True in Computer language.\n\
                    0 means False in Computer language.\n\
        ");
        
        printf("\n\
         ___________________________________________________\
____________\n\
        ");
        
        printf("\n\
         Let a = %d and  b = %d\n\
        ", a, b);
        
        //Equal to Equal to Operator (==)
        c = a == b;
        printf("\n\
         a == b\n\    
         Result : %d when equal to equal to operator (==)\
 is operated.\n\
        ",c);
         
        //Not Equal to Operator (!=)
        d = a != b;
        printf("\n\
         a != b\n\
         Result : %d when not equal to operator (!=)\ 
 is operated.\n\
        ",d);
        
        //Greater than Operator (>)
        e = a > b;
        printf("\n\
         a > b\n\
         Result : %d when greater than operator (>)\
 is operated.\n\
        ", f);

         //Lesser than Operator (<)
         f = a < b;
         printf("\n\
         a < b\n\
         Result : %d when lesser than operator (<)\
 is operated.\n\
         ", f); 
         
        //Greater than Equal to Operator (>=)
        g = a >= b;
        printf("\n\
         a >= b\n\
         Result : %d when greater than equal to operator(>=)\
 is operated.\n\
        ",g);
         
        //Lesser than Equal to Operator (<=)
        h = a<= b;
        printf("\n\
         a <= b\n\
         Result : %d when lesser than equal to operator(<=)\
 is operated.\n\
        ",h);
         
        printf("\n\
         ___________________________________________________\
____________\n\n\
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
[ 75%]: linking.release 4_rel_opt
[100%]: build ok!

```

## Execution
```
xmake run


         _______________________________________________________________
        
         ME-A1
         Roll No. 2030015
         Ashish Sehgal        
         ____________________________________        
         Program to Use Relational Operators.        
         ____________________________________
        
         Remember : 1 means True in Computer language.
                    0 means False in Computer language.
        
         _______________________________________________________________
        
         Let a = 7 and  b = 11
        
         a == b
         Result : 0 when equal to equal to operator (==) is operated.
        
         a != b
         Result : 1 when not equal to operator (!=) is operated.
        
         a > b
         Result : 0 when greater than operator (>) is operated.
        
         a < b
         Result : 1 when lesser than operator (<) is operated.
         
         a >= b
         Result : 0 when greater than equal to operator(>=) is operated.
        
         a <= b
         Result : 1 when lesser than equal to operator(<=) is operated.
        
         _______________________________________________________________

        
```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
