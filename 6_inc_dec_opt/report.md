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
Exp_06
Program to Use Unary Operators. 
03-12-2020
*/
//Coded by: Ashish Sehgal 2030015 ME - A1

//Header File
#include <stdio.h>

//Declaration and Assignation
int a = 6, b, c, d, e;

//Declaration of Main Function
int main (void)
{       
        printf("\n\
         _________________________________\n\
        ");

        //coder's introduction
        printf("\n\
         ME-A1\n\
         Roll No. 2030015\n\
         Ashish Sehgal\
        "); 
        
        //Program's name
        printf("\n\
         _______________________________\
        ");
        printf("\n\
         Program to Use Unary Operators.\
        "); 
        printf("\n\
         ______________________________\n\
        ");
        
        printf("\n\
         Let a = %d\n\
        ", a);
	
	//Post-Increment Operator
	b = a++;
	printf("\n\
 	 b = a++\n\
         Result of Post-Increment : b = %d\n\
        ", b);
        
        //Pre-Increment Operator
        c = ++a;
        printf("\n\
         c = ++a\n\
         Result of Pre-Increment : c = %d\n\
        ", c);
        
        //Post-Decrement Operator
        d = a--;
        printf("\n\
         d = a--\n\
         Result of Post-Decrement : d = %d\n\
        ", d);
        
        //Pre-Decrement Operator
        e = --a;
        printf("\n\
         e = --a\n\
         Result of Pre-Decrement : e  = %d\n\
        ", e);
        
        //Printing
        printf("\n\
         ________________________________\n\n\
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
[ 75%]: linking.release 6_inc_dec_opt
[100%]: build ok!

```

## Execution
```
xmake run


         _________________________________
        
         ME-A1
         Roll No. 2030015
         Ashish Sehgal        
         _______________________________        
         Program to Use Unary Operators.        
         ______________________________
        
         Let a = 6
        
 	 b = a++
         Result of Post-Increment : b = 6
        
         c = ++a
         Result of Pre-Increment : c = 8
        
         d = a--
         Result of Post-Decrement : d = 8
        
         e = --a
         Result of Pre-Decrement : e  = 6
        
         ________________________________

        
```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
