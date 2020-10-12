#include<stdio.h>
struct node
{
int data;
struct node *next;
};

int main()
{
int n,d,i;
struct node *q,*p,*head,*r;

printf("Enter the no of nodes in the linked list");
scanf("%d",&n);

printf("ENter the data to be entered in the head");
scanf("%d",&d);
q=malloc(sizeof(struct node));
q->data=d;
q->next=NULL;
head=q;
p=q;
for(i=0;i<n-1;i++)
{
printf("ENter the data to be entered in the next node");
scanf("%d",&d);
q=malloc(sizeof(struct node));
q->data=d;
q->next=NULL;
p->next=q;
p=p->next;
}
p=head;
printf("The nodes entered are:-\n");
while(p!=NULL)
{
printf("%d->",p->data);
p=p->next;
}
printf("NULL");
int m;
printf("\nEnter the nth node from end:-");
scanf("%d",&m);

p=head;
q=head;
while(m)
{
    p=p->next;
    m--;
}
while(p!=NULL)
{
    p=p->next;
    q=q->next;
    n--;
}
printf("%d",q->data);




}
