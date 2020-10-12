#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
struct node *merge(struct node *head,struct node *head1);
int main()
{
    int d,i,n;
    struct node *q,*p,*head;
    q=malloc(sizeof(struct node));
    printf("Enter the no of nodes in the 1st LL");
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
    printf("\n The 1st LL is : ");
    while(p!=NULL){
        printf(" %d ",p->data);
        p=p->next;

    }


    struct node *x,*y,*head1;
    x=malloc(sizeof(struct node));
    printf("\nEnter the no of nodes in 2nd LL");
    scanf("%d",&n);
    printf("Enter the data to fed into the head node");
    scanf("%d",&d);
    x->data=d;
    x->next=NULL;
    head1=x;
    y=head1;
    for(i=1;i<n;i++)
    {
        printf("Enter the data to fed into the next node");
        scanf("%d",&d);

        x=malloc(sizeof(struct node));
        x->data=d;
        x->next=NULL;
        y->next=x;
        y=y->next;
    }
        y=head1;
        printf("\n The 2nd LL is : ");
        while(y!=NULL){
        printf(" %d ",y->data);
        y=y->next;

    }
    struct node *h=merge(head,head1);
    while(h!=NULL){
        printf("\n %d ",h->data);
        h=h->next;

    }
}
struct node *merge(struct node *head,struct node *head1)
{


    struct node *q,*x,*newhead=NULL,*s=NULL;
    q=head;
    x=head1;

    if((q->data)<(x->data))
    {

              s=q;


        q=s->next;


    }
    else{

        s=x;


        x=s->next;


    }
        newhead=s;


while(q&&x)
{
    if((q->data)<=(x->data))
    {

        s->next=q;
        s=q;
        q=s->next;

    }
    else{

        s->next=x;
        s=x;
        x=s->next;

    }


}
if(q==NULL)
{
    s->next=x;

}
if(x==NULL)
{
    s->next=q;

}
  return newhead;

}

