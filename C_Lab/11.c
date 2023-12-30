#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *link;
};

struct List *l;

struct List *addfront(struct List *temp)
{
    struct List *P;
    P = malloc(sizeof(struct List));
    P->data = 10;
    P->link = temp;
    return P;
}

void *displaylist(struct List *temp)
{
    struct List *traverse = temp;
    while (traverse != NULL)
    {
        printf("%d ", traverse->data);
        traverse = traverse->link;
    }
}

int main()
{
    l = addfront(l);
    l = addfront(l);
    displaylist(l);

    return 0;
}