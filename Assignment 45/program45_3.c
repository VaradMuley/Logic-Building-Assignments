#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



#pragma pack(1)

struct node
{
    int data;
    struct node *next; 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;



void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = (*first);
        *first = newn;
    }
}

int FirstOccur(PNODE first,int no)
{
    int iCnt = 0;

    iCnt = 1;
    while (first != NULL)
    {
        if((first-> data) == no)
        {
           return iCnt;
        }
        iCnt++;
        first = first -> next;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first -> data);
        first = first -> next; 
    }
    printf("NULL\n");
}

int main ()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,151);
    InsertFirst(&head,120);
    InsertFirst(&head,11);
    InsertFirst(&head,50);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = FirstOccur(head,11);
    printf("%d\n",iRet);
    

    
    return 0;
}