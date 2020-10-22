#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};struct node *nw,*head1,*head2,*p;
int n,i,e;
void main()
{
    printf("\nenter no. of elements in first linked list");
    scanf("%d",&n);
    nw=(struct node*)malloc(sizeof (struct node));
    nw->data=NULL;
    nw->next=NULL;
    head1=nw;
    for (i=0;i<n;i++)
    {
        if (head1->data==NULL)
        {
            printf("\nEnter element");
            scanf("%d",&e);
            head1->data=e;
            head1->next=NULL;
        }
        else
        {
            p=head1;
            printf("\nEnter element");
            scanf("%d",&e);
            while(p->next!=NULL){
                p=p->next;
            }
            nw=(struct node*)malloc(sizeof (struct node));
            nw->data=e;
            p->next=nw;
            nw->next=NULL;
        }
    }
    printf("\nenter no. of elements in second linked list");
    scanf("%d",&n);
    nw=(struct node*)malloc(sizeof (struct node));
    nw->data=NULL;
    nw->next=NULL;
    head2=nw;
    for (i=0;i<n;i++)
    {
        if (head2->data==NULL)
        {
            printf("\nEnter element");
            scanf("%d",&e);
            head2->data=e;
            head2->next=NULL;
        }
        else
        {
            p=head2;
            printf("\nEnter element");
            scanf("%d",&e);
            while(p->next!=NULL){
                p=p->next;
            }
            nw=(struct node*)malloc(sizeof (struct node));
            nw->data=e;
            p->next=nw;
            nw->next=NULL;
        }
    }
    printf("\nmerged linked list: ");
    //process of merging
    p=head1;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=head2;
    //printing final merged list
    while(head1!=NULL){
        printf("%d\t",head1->data);
        head1=head1->next;
    }
}
