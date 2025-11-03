////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.3.c
//  Description :   Program to print 5 to 1 numbers on screen 
//  Author :        Varad Nitin Muley
//  Date :          31/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Display ()
{
   int i = 0 ;
   i = 5;

   while(i >= 1)
   {
        printf("%d\n",i);
        i--;
   }
}

int main ()
{
    Display();

    return 0;
}

