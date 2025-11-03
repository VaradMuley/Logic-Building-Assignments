////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.1.c
//  Description :   Accept one character from user and convert case of that character  
//  Input : a       Output : A
//  Input : B       Output : b
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

char DisplayConvert(char cValue)
{
   if (cValue >= 'A' && cValue <= 'Z' )
   {
      printf("%c",cValue + 32);
   }
   else if (cValue >= 'a' && cValue <= 'z' )
   {
      printf("%c",cValue - 32);
   }


}

int main ()
{
   char cValue = '\0';

   printf( " Enter character : ");
   scanf ("%c",&cValue);

   DisplayConvert(cValue);

   return 0;
}
