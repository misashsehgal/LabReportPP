/*
Exp_02 
Program to Use Different Data Types. 
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
	 ____________________________________\
        ");
	printf("\n\
	 Program to Use Different Data Types.\
        "); //Program's name
	printf("\n\
	 ____________________________________\n\
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
         Display Integers:         %i\n\
				   %i\n\
				   %i\n\
				   %i\n\
	",a, b, c, d); //Printing(1)

        printf("\n\
	 Display Floating Values:  %.1f\n\
				   %.2f\n\
				   %.3f\n\
				   %.4f\n\
	",A, B, C, D); //Printing(2)

        printf("\n\
	 Display characters:       %c%c%c\n\
	",x, y, z); //Printing(3)

        printf("\n\
	 ____________________________________\n\n\
        ");

        return 0; //Termination

}
