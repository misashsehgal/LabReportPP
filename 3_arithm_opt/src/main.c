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

