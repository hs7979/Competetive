#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};struct node *nw,*p,*head,*temp;
main()
{
    nw=(struct node*)malloc(sizeof(struct node));
    nw->data=NULL;
    nw->next=NULL;
    head=nw;
    printf("enter size of linked list");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int j;
        printf("\nenter Element");
        scanf("%d",&j);
        if(head->data==NULL)
        {
            head->data=j;
            head->next=NULL;
        }
        else
        {
            nw=(struct node*)malloc(sizeof(struct node));
            nw->data=NULL;
            nw->next=NULL;
            p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            nw->data=j;
            p->next=nw;
            nw->next=NULL;
        }
    }
    printf("list after deleting alternate elements:\n");
    aldelete(head);
}
void aldelete(struct node* start)
{
    p=start;
    while(p->next!=NULL)
    {
        printf("%d\t",p->data);
        temp=p->next;
        p=p->next->next;
        free(temp);
    }
    printf("%d",p->data);
}
