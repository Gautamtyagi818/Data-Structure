#include<stdio.h>
#include<conio.h>
struct stu *new(int);
void addnode_FIFO();
void traverse();
void addafter(item);
struct stu
{
    int info;
    struct stu *pre;
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
    printf("\n enter a new node content");
    scanf("%d",&a);
    p=new(a);
    printf("\n enter the node content which do u want to perform the deletion operation");
    scanf("%d",&item);
    addafter(item);
    print("\n the list is as follow after deletion operation");
    traverse(head);
    getch();
}
struct stu *new(int a)
{
    p=(struct stu *)malloc(sizeof(struct stu));
    temp->info=a;
    temp->pre=NULL;
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
            p->pre=temp;
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
/*deletion a node before a given node*/
void addafter(int item)
{
    temp=head;
    if(head==NULL)
    {
        printf("\n deletion is not possible");
        getch();
        exit();
    }
    if(temp->info==item)
    {
        printf("\n this is the first node of  linklist and no node before this node");
        getch();
        exit();
    }
    while(temp!=NULL)
    {
        if(temp->next->info=item)
        {
            temp->pre->next=temp->next;
            temp->next->pre=temp->pre;
            free(temp);
        }
        temp=temp->next;
    }
}