#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
struct node1
{
    int data;
    struct node1*next;

};
int main()
{
    int d,i,n;
    struct node *q,*p,*head;
    q=malloc(sizeof(struct node));
    printf("Enter the no of nodes");
    scanf("%d",&n);
    printf("Enter the data to fed into the head node");
    scanf("%d",&d);
    q->data=d;
    q->next=NULL;
    head=q;
    p=head;
    for(i=1;i<n;i++)
    {
        printf("Enter the data to fed into the next node");
        scanf("%d",&d);

        q=malloc(sizeof(struct node));
        q->data=d;
        q->next=NULL;
        p->next=q;
        p=p->next;
    }
    p=head;
    q=head;
    struct node *prev;
    prev=NULL;
    while(p!=NULL){
    q=p->next;
    p->next=prev;
    prev=p;
    p=q;
    }
    p=prev;
    printf("\n The Reverse LL is : ");
    while(p!=NULL){
        printf(" %d ",p->data);
        p=p->next;

    }
}



