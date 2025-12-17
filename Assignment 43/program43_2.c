////////////////////////////////////////////////////////////
//
//  File name :     Program_43_2.c
//  Description :   Singly Linear Linked List program to
//                  insert nodes at first position and
//                  display all prime numbers from
//                  the linked list.
//  Author :        Varad Nitin Muley
//  Date :          17/12/25
//
////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure declaration for singly linear linked list
//
///////////////////////////////////////////////////////////////////////////////////////////

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/////////////////////////////////////////////////////////////////////
//
//  Function name : InsertFirst
//  Description   : Used to insert a new node at the first
//                  position of the linked list
//  Parameters    : PPNODE Head, int no
//  Return Value  : void
//
/////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayPrime
//  Description   : Displays all prime numbers from the
//                  singly linear linked list
//  Parameters    : PNODE Head
//  Return Value  : void
//
/////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
    PNODE temp = Head;
    int i = 0, iCnt = 0;

    while(temp != NULL)
    {
        if(temp->Data > 1)
        {
            iCnt = 0;

            for(i = 1; i <= (temp->Data / 2); i++)
            {
                if((temp->Data % i) == 0)
                {
                    iCnt++;
                }
            }

            if(iCnt == 1)
            {
                printf("%d is a prime number\n", temp->Data);
            }
        }
        temp = temp->Next;
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,20);
    InsertFirst(&First,17);
    InsertFirst(&First,41);
    InsertFirst(&First,89);
    InsertFirst(&First,28);
    InsertFirst(&First,51);
    InsertFirst(&First,6);
    InsertFirst(&First,11);

    DisplayPrime(First);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input Linked List : 11 -> 6 -> 51 -> 28 -> 89 -> 41 -> 17 -> 20
//  Output            :
//                      11 is a prime number
//                      17 is a prime number
//                      41 is a prime number
//                      89 is a prime number
//
////////////////////////////////////////////////////////////
