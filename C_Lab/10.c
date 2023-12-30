#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *link;
};
struct List *list;

struct List *displaylist(struct List *temp)
{
    struct List *traverse = temp;
    while (traverse != NULL)
    {
        printf("%d ", traverse->data);
        traverse = traverse->link;
    }
    printf("\n");
    return temp;
}

struct List *insertfront(struct List *temp)
{
    struct List *P;
    P = malloc(sizeof(struct List));
    int Data;
    printf("Enter the Data for new node : ");
    scanf("%d", &Data);
    P->data = Data;
    P->link = temp;
    return P;
}

struct List *insertlast(struct List *temp)
{
    struct List *P;
    P = malloc(sizeof(struct List));
    int Data;
    printf("Enter the Data for new node : ");
    scanf("%d", &Data);
    P->data = Data;
    struct List *traverse = temp;
    while (traverse->link != NULL)
        traverse = traverse->link;
    traverse->link = P;
    P->link = NULL;
    return temp;
}

struct List *deletefront(struct List *temp)
{
    struct List *traverse = temp;
    traverse = traverse->link;
    free(temp);
    return traverse;
}

struct List *deletelast(struct List *temp)
{
    struct List *traverse = temp, *P = temp;
    while (traverse->link != NULL)
    {
        P = traverse;
        traverse = traverse->link;
    }
    P->link = NULL;
    free(traverse);
    return temp;
}

int main()
{
    list = insertfront(list);
    displaylist(list);
    list = insertfront(list);
    displaylist(list);
    list = insertlast(list);
    displaylist(list);
    list = deletefront(list);
    displaylist(list);
    list = deletelast(list);
    displaylist(list);
    return 0;
}