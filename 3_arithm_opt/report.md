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
Exp_03  
Program to Use Arithmetic Operators. 
20-11-2020
*/
//Coded by: Ashish Sehgal 2030015 ME - A1
        
//Header File
#include <stdio.h> 
        
//Assignation and Declaration
int w = 16, x = 2, y = 4, z = 2;
int m, n, o, b, q, r; 
        
//Declaration of Main Function
int main (void)  
{       
        printf("\n\
         _____________________________________\n\
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
         Program to Use Arithmetic Operators.\
        "); 
        printf("\n\
         ____________________________________\n\
        ");

        printf("\n\
         Let w = %d, x = %d, y = %d and z = %d\n\ 
        ", w, x, y, z);

        //Modulo Division
        m = w % y;
        printf("\n\
         m = w % y\n\ 
         Result Of Remainder :      m = %d\n\
        ", m); 
        
        //Division
        n = w / x / y / z; 
        printf("\n\
         n = w / x / y / z\n\
         Result of Division :       n = %d\n\
        ", n);
        
        //Multiplication
        o = w * x * y * z;
        printf("\n\
         o = w * x * y * z\n\
         Result of Multiplication : o = %d\n\
        ", o);
        
        //Addition
        b = w + x + y+ z ; 
        printf("\n\
         b = w + x + y + z\n\
         Result of Addition :       b = %d\n\
        ", b);
        
        //Subtraction
        q = w - x - y - z; 
        printf("\n\
         q = w - x - y - z\n\
         Result of Subtraction :    q = %d\n\
        ", q);
        
        //Precedence
        r = b % w / x * y + z - m; 
        printf("\n\
         r = b % w / x * y + z - m\n\
         Result of Precedence :     r = %d\n\
        ", r);
   
        //Printing
        printf("\n\
         _____________________________________\n\n\
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
[ 75%]: linking.release arithmetic.calc
[100%]: build ok!

```

## Execution
```
xmake run


         _____________________________________
        
         ME-A1
         Roll No. 2030015
         Ashish Sehgal        
         ____________________________________        
         Program to Use Arithmetic Operators.        
         ____________________________________
        
         Let w = 16, x = 2, y = 4 and z = 2
        
         m = w % y
         Result Of Remainder :      m = 0
        
         n = w / x / y / z
         Result of Division :       n = 1
        
         o = w * x * y * z
         Result of Multiplication : o = 256
        
         b = w + x + y + z
         Result of Addition :       b = 24
        
         q = w - x - y - z
         Result of Subtraction :    q = 8
        
         r = b % w / x * y + z - m
         Result of Precedence :     r = 18
        
         _____________________________________

        
```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
