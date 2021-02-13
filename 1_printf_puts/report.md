[Home of Lab Report](../lab.html)

# Program Ex 01: Program to Display My Favourite Poem.

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
Exp_01 
Program to Display My Favourite Poem. 
20-11-2020
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
         
        puts("\n\
         _____________________________________\
        ");
        puts("\
         Program to Display My Favourite Poem.\
        "); //Program's name
        puts("\
         _____________________________________\
        "); 
        
        printf("\n\
                    THE UNSUBDUED\n\
        "); //Title
        
        printf("\n\
         I have hoped, I have planed, I have striven,\n\
         To the will I have added the deed;\n\
         The best that was in me I've given,\n\
         I have prayed, but the Gods would not heed.\n\n\
         I am old, I am bent, I am cheated\n\
         Of all that Youth urged me to win;\n\
         But name me not with the defeated,\n\
         For tomorrow- again, I begin.\
        "); //Poem
         
        printf("\n\
         ____________________________________________\n\n\
        "); 
        
        return 0; //Termination            
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release print.poem
[100%]: build ok!

```

## Execution
```
xmake run


         ME-A1
         Roll No. 2030015
         Ashish Sehgal
        
         _____________________________________        
         Program to Display My Favourite Poem.        
         _____________________________________        

                    THE UNSUBDUED
        
         I have hoped, I have planed, I have striven,
         To the will I have added the deed;
         The best that was in me I've given,
         I have prayed, but the Gods would not heed.

         I am old, I am bent, I am cheated
         Of all that Youth urged me to win;
         But name me not with the defeated,
         For tomorrow- again, I begin.        
         ____________________________________________

        
```

### Known Bugs and/or Errors:

No Bugs and/or Errors found.

### Lessons Learned:

1. Use of printf(); puts(); and display of formatting.
1. I would make relative patterns and ammend the display formatting (if feedback will be given).
1. Revise printf(); which is commented as “Poem”.
1. Intendation so that program can be easily readable.
