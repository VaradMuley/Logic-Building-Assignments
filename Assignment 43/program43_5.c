////////////////////////////////////////////////////////////
//
//  File name :     Program_43_5.c
//  Description :   Singly Linear Linked List program to
//                  insert nodes at first position and
//                  calculate and display the sum of digits
//                  of each element from the linked list.
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
//  Function name : SumDigit
//  Description   : Calculates and displays the sum of digits
//                  of each element from the singly linear
//                  linked list
//  Parameters    : PNODE Head
//  Return Value  : void
//
/////////////////////////////////////////////////////////////////////

void SumDigit(PNODE Head)
{
    PNODE temp = Head;
    int iSum = 0, iNo = 0;

    while(temp != NULL)
    {
        iNo = temp->Data;
        iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
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
    InsertFirst(&First,20);
    InsertFirst(&First,6);
    InsertFirst(&First,11);

    SumDigit(First);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input Linked List : 11 -> 6 -> 20 -> 28 -> 89 -> 41 -> 17 -> 20
//  Output            : 2   6   2   10  17  5   8   2
//
////////////////////////////////////////////////////////////
