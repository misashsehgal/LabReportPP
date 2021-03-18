/*
Exp_15
Program to find Fibonacci series. 
02-02-2021
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
 _________________________________\
");

printf("\n\
 Program to find Fibonacci series.\
"); //Program's name
printf("\n\
 _________________________________\n\n\
");

int i, t1, t2, tt, nxt;
printf(" Enter term1: ");
scanf("%d", &t1);
printf(" Enter term2: ");
scanf("%d", &t2);
printf(" Enter the number of terms: ");
scanf("%d", &tt);
printf(" Fibonacci Series: ");

for (i = 1; i <= tt; ++i)
{
    nxt = t1 + t2;
    if (i < tt)
    {
    printf("%d, ", nxt);
    }
    else 
    {
    printf("%d ", nxt);
    }
    
t1 = t2;
t2 = nxt;
}
printf("\n\
 _________________________________________________\n\n\
"); 

return 0;
}
