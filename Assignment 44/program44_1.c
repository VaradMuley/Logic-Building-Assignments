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

bool Search(PNODE first, int no)
{
    while (first != NULL)
    {
        if (first->data == no)
        {
            return true;
        }
        first = first->next;
    }
    return false;
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
    bool bRet = false;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    bRet = Search(head,11);

    if(bRet == true)
    {
        printf("Number is present in the list\n");
    }
    else
    {
        printf("Number is not present in the list\n");
    }


    return 0;
}