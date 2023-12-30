#include<stdio.h>
#include<stdlib.h>

struct List
{
    int data;
    struct List *link;
};

struct List *list=NULL;


struct List *addfnode(struct List *temp)
{
    struct List *new=malloc(sizeof(struct List));
    printf("Enter Data : ");
    int data;
    scanf("%d",&data);
    new->data=data;
    new->link=temp;
    return new;
}

struct List *display(struct List *temp)
{
    struct List *traverse=temp;
    if(traverse==NULL)
        printf("List is empty\n");
    else
        while(traverse!=NULL)
        {
            printf("%d ",traverse->data);
            traverse=traverse->link;
        }
    printf("\n");
    return temp;
}

struct List *addlnode(struct List *temp)
{
    struct List *traverse = temp;
    struct List *new = malloc(sizeof(struct List));
    printf("Enter Data: ");
    int data;
    scanf("%d", &data);
    new->data = data;
    new->link = NULL;

    if (temp == NULL) {
        // Linked list is empty
        return new;
    }

    while (traverse->link != NULL) {
        traverse = traverse->link;
    }

    traverse->link = new;
    return temp;
}

int main()
{
    display(list);
    list=addfnode(list);
    display(list);
    list=addfnode(list);
    display(list);
    list=addlnode(list);
    display(list);
    list=addlnode(list);
    display(list);
}