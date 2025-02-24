#include<stdio.h>
struct stu *new(int);
void addnode_FIFO();
void traverse();
void count(item);
struct stu
{
    int info;
    struct stu *next;
}*p,*r,*temp,*head=0;
void main()
{
    int a,ch=0,item;
    while(ch!=0)
    {
        printf("\n enter a number");
        scanf("%d",&a);
        p=new(a);
        addnode_FIFO(p);
        printf("\n for continue enter 1 or for stop enter 0");
        scanf("%d",&ch);
    }
    printf("\n the list is as follow");
    traverse(head);
    count();
    getch();
}
struct stu *new(int a)
{
    p=(struct stu *)malloc(sizeof(struct stu));
    temp->info=a;
    temp->next=NULL;
    return p;
}
void addnode_FIFO()
{
    temp=head;
    if(head==NULL)
    head=p;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
            temp->next=p;
        }
    }
}
void traverse()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->info);
        temp=temp->next;
    }
}
/*count number of nodes,nodes of node with zero value,count positive and negative node*/
void count()
{
    int total_nodes=0;
    int positive_nodes=0;
    int negative_nodes=0;
    int total_zero=0;
    temp=head;
    while(temp!=NULL)
    {
        total_nodes++;
        if(temp->info<0)
        negative_nodes++;
        if(temp->info==0)
        total_zero++;
        if(temp->info>0)
        positive_nodes++;
        temp=temp->next;
    }
    printf("\n total number of nodes=%d",total_nodes);
    printf("\n total number of nodes conating negative value=%d",negative_nodes);
    printf("\n total number of nodes contaning positive value=%d",positive_nodes);
    printf("\n total number of nodes contaning zero value=%d",total_zero);
}