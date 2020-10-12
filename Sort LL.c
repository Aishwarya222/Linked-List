#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int i, n,d;
    struct node *q,*p;
    struct node *head;
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
     printf("\n The LL is : ");
    while(p!=NULL){
        printf(" %d ",p->data);
        p=p->next;

    }


    q=head->next;
    p=head;
    int temp;
    printf("\n The sorted LL is : ");
    Sort(q,p);
    p=head;
    while(p!=NULL){
        printf(" %d ",p->data);
        p=p->next;

    }
}
void Sort(struct node *q,struct node *p)
    {
        int temp;

    while(p->next!=NULL)
    {
        q=p->next;

    while(q!=NULL){
    if((p->data)>=(q->data))
    {
        temp=q->data;
        q->data=p->data;
        p->data=temp;
        q=q->next;

    }
    else
        q=q->next;

    }
    p=p->next;

}

}
