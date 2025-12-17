////////////////////////////////////////////////////////////
//
//  File name :     Program_43_4.c
//  Description :   Singly Linear Linked List program to
//                  insert nodes at first position and
//                  find the second maximum element from
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
//  Function name : SecMaximum
//  Description   : Used to find the second maximum element
//                  from the singly linear linked list
//  Parameters    : PNODE Head
//  Return Value  : int (Second maximum element)
//
/////////////////////////////////////////////////////////////////////

int SecMaximum(PNODE Head)
{
    PNODE temp = Head;
    int iMax = 0, iMax2 = 0;

    while(temp != NULL)
    {
        if(temp->Data > iMax)
        {
            iMax2 = iMax;
            iMax = temp->Data;
        }
        else if((temp->Data > iMax2) && (temp->Data < iMax))
        {
            iMax2 = temp->Data;
        }
        temp = temp->Next;
    }

    return iMax2;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,20);
    InsertFirst(&First,17);
    InsertFirst(&First,41);
    InsertFirst(&First,89);
    InsertFirst(&First,28);
    InsertFirst(&First,20);
    InsertFirst(&First,6);
    InsertFirst(&First,11);

    iRet = SecMaximum(First);

    printf("Second Maximum element is : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input Linked List : 11 -> 6 -> 20 -> 28 -> 89 -> 41 -> 17 -> 20
//  Output            : Second Maximum element is : 41
//
////////////////////////////////////////////////////////////
