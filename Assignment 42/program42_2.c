////////////////////////////////////////////////////////////
//
//  File name :     Program_42_2.c
//  Description :   Singly Linear Linked List program to
//                  insert nodes at first position and
//                  search the last occurrence of a given
//                  element in the linked list.
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
//  Function name : SearchLastOcc
//  Description   : Used to find the position of last
//                  occurrence of a given element
//  Parameters    : PNODE Head, int no
//  Return Value  : int (Last position if found, otherwise 0)
//
/////////////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE Head, int no)
{
    PNODE temp = Head;
    int iPos = 1;
    int iStore = 0;

    while(temp != NULL)
    {
        if(temp->Data == no)
        {
            iStore = iPos;
        }
        iPos++;
        temp = temp->Next;
    }
    return iStore;
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

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    iRet = SearchLastOcc(First, 70);

    printf("Position of element is %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input Linked List : 10 -> 20 -> 30 -> 40 -> 50 -> 30 -> 70
//  Search Element    : 70
//  Output            : Position of element is 7
//
////////////////////////////////////////////////////////////
