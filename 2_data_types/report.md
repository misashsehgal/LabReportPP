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
Exp_02  
Program to Use Different Data Types. 
20-11-2020
*/      
//Coded by: Ashish Sehgal 2030015 ME - A1
         
//Header File
#include <stdio.h> 
         
//Declaration of Main Function
int main (void)  
{       
        printf("\n\
         ________________________________________\n\
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
         Program to Use Different Data Types.\
        "); 
        printf("\n\
         ____________________________________\n\
        ");
        
        //Declaration and Assignation(1)
        int   a=7,\
              b=9,\
              c=11,\
              d=13;
        //Declaration and Assignation(2)
        float A=7.9,\
              B=9.11,\
              C=11.137,\
              D=13.7911; 
        //Declaration and Assignation(3)
        char x='P',\
             y='P',\
             z='S'; 
                                     
        //Printing(1)
        printf("\n\
         Display Integers:         %i, %i, %i, %i\n\
        ",a, b, c, d); 
        
        //Printing(2)
        printf("\n\
         Display Floating Values : %.1f\n\
                                   %.2f\n\
                                   %.3f\n\
                                   %.4f\n\
        ",A, B, C, D); 
        
        //Printing(3)
        printf("\n\
         Display characters :      %c%c%c\n\
        ",x, y, z); 
        
        printf("\n\
         ________________________________________\n\n\
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
[ 75%]: linking.release display.datatypes
[100%]: build ok!

```

## Execution
```
xmake run


         ________________________________________
        
         ME-A1
         Roll No. 2030015
         Ashish Sehgal        
         ____________________________________        
         Program to Use Different Data Types.        
         ____________________________________
        
         Display Integers:         7, 9, 11, 13
        
         Display Floating Values : 7.9
                                   9.11
                                   11.137
                                   13.7911
        
         Display characters :      PPS
        
         ________________________________________

        
```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
