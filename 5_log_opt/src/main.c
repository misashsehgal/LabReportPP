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
