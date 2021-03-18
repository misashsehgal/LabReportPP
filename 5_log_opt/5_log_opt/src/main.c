//Program to illustrate Logical Operators.(Learning C).
#include<stdio.h>//Header File
int a=7, b=9, c=11, d=13, e, f, g;//Declaration and Assignation
int main(void)//Declaration of Main Function
{

printf("  ME-A1\n  Roll No. 2030015\n  Ashish Sehgal\n\n  ________________________________________\n\n  Program to illustrate Logical Operators.\n  ________________________________________ \n\n"); //Creater's Introduction and Program's Name

printf("  Remember : 1 means True in Computer language.\n             0 means False in Computer language.\n\n" );//Tips to remember

e=(a==b)&&(c!=d);
printf("  Result is %d when logical and operator(&&) is operated.\n",e);
f=(a>b)||(c<d);
printf("  Result is %d when logical or operator(||) is operated.\n",f);
g=!((a>=b)&&(c<=d));
printf("  Result is %d when logical not operator(!) is operated.\n",g);
printf("  ______________________________________________________\n");
 
return 0;//Termination

}

