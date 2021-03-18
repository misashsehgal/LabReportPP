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
