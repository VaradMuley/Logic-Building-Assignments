////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.3.c
//  Description :   Accept one number from user if number is less than 10 then print " Hello"
//                  otherwise print "Demo"
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Display(int iNo)
{
   if (iNo < 10)
   {
     printf("Hello");
   }
   else
   {
     printf("Demo");
   }
    
}

int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

