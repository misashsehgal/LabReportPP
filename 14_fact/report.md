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

/*
Exp_14 
Program to find Factorial of a number. 
14-01-2020
*/
//Coded by: Ashish Sehgal ME-A1 2030015

#include <stdio.h> //Header File
                   
int main (void) //Declaration of Main Function
{       
printf("\n\
 ME-A1\n\
 Roll No. 2030015\n\
 Ashish Sehgal\n\
"); //coder's introduction
                
printf("\n\
 ______________________________________\
");

printf("\n\
 Program to find Factorial of a number.\
"); //Program's name
printf("\n\
 ______________________________________\n\n\
");

int i, n, fact=1;
        
printf(" Enter an integer: ");
scanf("%d", &n);

if(n<0)
{
    printf(" Factorial of a negative number is not possible.\n");
}
else
{
for(i=1; i<=n; i++)
{
fact *= i;
}
printf(" Factorial of %d = %d", n, fact);
}
printf("\n\
 _______________________________________________\n\n\
");  
 
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release 14_fact
[100%]: build ok!

```

## Execution
```
xmake run


 ME-A1
 Roll No. 2030015
 Ashish Sehgal

 ______________________________________
 Program to find Factorial of a number.
 ______________________________________

 Enter an integer:  Factorial of 32767 = 0
 _______________________________________________


```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
