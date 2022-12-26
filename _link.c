#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL;
    for(int i=1;i<=5;i++)
    {
    add_begin(&head,i);
    //add_begin(&head,5);
    }

    display(head);

}
    struct node* createnode(struct node* *head,int data)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        return newnode;
    }

void display(struct node *ptr)
{
    while(ptr)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void add_begin(struct node * *head,int data)
{
    if(*head==NULL)
    {
        *head=createnode(&(*head),data);
        return;
    }
    else
    {
        struct node * newnode=createnode(&(*head),data);
        newnode->next= *head;
        *head=newnode;
    }
}
