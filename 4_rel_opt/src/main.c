/*      
Exp_04   
Program to Use Relational Operators. 
03-12-2020
*/       
//Coded by: Ashish Sehgal 2030015 ME - A1
        
//Header File
#include <stdio.h> 
         
//Assignation and Declaration
int a = 7, b = 11;
int c, d, e, f, g, h;
        
//Declaration of Main Function
int main (void)  
{       
        printf("\n\
         ___________________________________________________\
____________\n\
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
         Program to Use Relational Operators.\
        "); 
        printf("\n\
         ____________________________________\n\
        ");
         
        //Tips to remember           
        printf("\n\
         Remember : 1 means True in Computer language.\n\
                    0 means False in Computer language.\n\
        ");
        
        printf("\n\
         ___________________________________________________\
____________\n\
        ");
        
        printf("\n\
         Let a = %d and  b = %d\n\
        ", a, b);
        
        //Equal to Equal to Operator (==)
        c = a == b;
        printf("\n\
         a == b\n\    
         Result : %d when equal to equal to operator (==)\
 is operated.\n\
        ",c);
         
        //Not Equal to Operator (!=)
        d = a != b;
        printf("\n\
         a != b\n\
         Result : %d when not equal to operator (!=)\ 
 is operated.\n\
        ",d);
        
        //Greater than Operator (>)
        e = a > b;
        printf("\n\
         a > b\n\
         Result : %d when greater than operator (>)\
 is operated.\n\
        ", f);

         //Lesser than Operator (<)
         f = a < b;
         printf("\n\
         a < b\n\
         Result : %d when lesser than operator (<)\
 is operated.\n\
         ", f); 
         
        //Greater than Equal to Operator (>=)
        g = a >= b;
        printf("\n\
         a >= b\n\
         Result : %d when greater than equal to operator(>=)\
 is operated.\n\
        ",g);
         
        //Lesser than Equal to Operator (<=)
        h = a<= b;
        printf("\n\
         a <= b\n\
         Result : %d when lesser than equal to operator(<=)\
 is operated.\n\
        ",h);
         
        printf("\n\
         ___________________________________________________\
____________\n\n\
        ");
        
        //Termination
        return 0;
        
}


