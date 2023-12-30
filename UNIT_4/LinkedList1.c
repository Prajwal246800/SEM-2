#include <stdio.h>
#include <stdlib.h>
struct List
{
    int Data;
    struct List *Link;
};
typedef struct List List;
List *LinkedList;

List* Add_Node();
int TraverseCount(List *);
void Display_Linked_List(List*);
List* Linked_List_Prepend(List*);
List* Linked_List_Append(List*);
List* Linked_List_Positional(List*, int);
List* Linked_List_Pop_End(List*);
List* Linked_List_Pop_Front(List*);


int main()
{
    int Option=0;
    while(Option!=7)
    {
        printf("\n The Linked List Option Dashboard");
        printf("\n 0:Display\t1:Prepend\t2:Append\t3:Positional\t4:PopFront\t5:PopEnd\t6:NodeCount");
        printf("\n Enter your Option from the Dashboard-->");
        scanf("%d",&Option);
        printf(" \n You have entered Option-->%d",Option);
        switch(Option)
        {
            case 0:
                Display_Linked_List(LinkedList);
                break;
            case 1:
                printf("\n Prepending a Node to Linked List");
                LinkedList = Linked_List_Prepend(LinkedList);
                break;
            case 2:
                printf("\n Appending a Node to Linked List");
                LinkedList = Linked_List_Append(LinkedList);
                break;
            case 3:
                printf("\n Enter the Position to add a node-->");
                int Position;
                scanf("%d",&Position);
                LinkedList = Linked_List_Positional(LinkedList,Position);
                break;
            case 4:
                printf("\n Popping a Node from the begining of LinkedList");
                LinkedList = Linked_List_Pop_Front(LinkedList);
                break;
            case 5:
                printf("\n Popping a Node from the end of Linked List");
                LinkedList = Linked_List_Pop_End(LinkedList);
                break;
            case 6:
                printf("\n Number of Nodes in the given LinkedList-->%d",TraverseCount(LinkedList));
                break;
        }
    }
    printf("\n\n\n");
    return 0;
}

List* Add_Node()
{
    List *Temp;
    Temp = malloc(sizeof(List));
    printf("\n Enter the data for the Node-->");
    int Data;
    scanf("%d",&Data);
    Temp->Data = Data;
    Temp->Link = NULL;
    return Temp;
}

int TraverseCount(List *Temp)
{
    int TC=0;
    List *Traverse = Temp;
    if(Temp==NULL)
    {
        return TC;
    }
    else
    {
        while(Traverse!=NULL)
        {
            TC++;
            Traverse = Traverse->Link;
        }
    }
    return TC;
}

void Display_Linked_List(List *Temp)
{
    List *Traverse = Temp;
    if(Traverse==NULL)
    {
        printf("\n List is Empty");
    }
    else
    {
        while(Traverse != NULL)
        {
            printf("\nNode Data-->%d", Traverse->Data);
            Traverse=Traverse->Link;
        }
    }
    return;
}

List* Linked_List_Prepend(List *Temp)
{
    List *P = Add_Node();
    P->Link = Temp;
    Temp = P;
    return Temp;
}

List* Linked_List_Append(List *Temp)
{
    List *P = Add_Node();
    List *Traverse = Temp;
    if(Temp==NULL)
        Temp=P;
    else
    {
        while(Traverse->Link!=NULL)
        Traverse= Traverse->Link;
        Traverse->Link = P;
    }
    return Temp;
}

List* Linked_List_Positional(List *Temp, int Position)
{
    List *P = Add_Node();
    return Temp;
}

List* Linked_List_Pop_Front(List *Temp)
{
    List *Traverse = Temp;
    List *P = Temp;
    if(Traverse==NULL)
    {
        printf("\n List is Empty");
    }
    else
    {
        Traverse = Traverse->Link;
        Temp = Traverse;
        printf("\n The element popped from the front of the Linked List-->%d",P->Data);
        free(P);
    }
    return Temp;
}

List* Linked_List_Pop_End(List *Temp)
{
    List *Traverse = Temp;
    List *P = Temp;
    List *T;
    if(Traverse==NULL)
    {
        printf("\n List is Empty");
    }
    else
    {
        while(Traverse->Link!=NULL)
        {
            P = Traverse;
            Traverse = Traverse->Link;
        }
        printf("\n The element popped from the end of the LinkedList-->%d",Traverse->Data);
        free(Traverse);
    }
    return Temp;
}