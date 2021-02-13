[Home of Lab Report](../lab.html)

# Program Ex 01: Program to Display Different Data Types.

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
Program to Display Different Data Types. 
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
        
	printf("\n\
	 ________________________________________\
        ");
	printf("\n\
	 Program to Display Different Data Types.\
        "); //Program's name
	printf("\n\
	 ________________________________________\n\
        ");

	int   a=7,\
	      b=9,\
	      c=11,\
	      d=13; //Declaration and Assignation(1)
	float A=7.9,\
	      B=9.11,\
	      C=11.137,\
	      D=13.7911; //Declaration and Assignation(2)
	char x='P',\
             y='P',\
             z='S'; //Declaration and Assignation(3)

	printf("\n\
         Display Integers:         %i, %i, %i, %i\n\
	",a, b, c, d); //Printing(1)

        printf("\n\
	 Display Floating Values : %.1f\n\
				   %.2f\n\
				   %.3f\n\
				   %.4f\n\
	",A, B, C, D); //Printing(2)

        printf("\n\
	 Display characters :      %c%c%c\n\
	",x, y, z); //Printing(3)

        printf("\n\
	 ________________________________________\n\n\
        ");

        return 0; //Termination

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


         ME-A1
         Roll No. 2030015
         Ashish Sehgal
        
	 ________________________________________        
	 Program to Display Different Data Types.        
	 ________________________________________
        
         Display Integers:         7, 9, 11, 13
	
	 Display Floating Values : 7.9
				   9.11
				   11.137
				   13.7911
	
	 Display characters :      PPS
	
	 ________________________________________

        
```

### Known Bugs and/or Errors:

No Bugs and/or Errors found.

### Lessons Learned:

1. Declaration and assignation of different data types.
1. I would try to first display different data types by their categories (i.e Primary, Userdefined and Derived), then their related data types as their subs. 
1. Revise Declaration and assignation of different data types first then prinf() to print different data types.
1. Use of different format specifiers with specified integral and decimal places.    
