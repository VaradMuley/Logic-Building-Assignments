////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program6.1.c
//  Description :   Write a program which accepts name from user and print that name 
//  Input :         Varad Muley
//  Output :        Varad Muley
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int main ()
{
   char Name[30];

   printf("Please Enter your full name : ");
   scanf("%s",Name);

   printf("Your full name is : %s",Name);

   return 0;
}
