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
