#include<stdio.h>
#include<conio.h>
struct stu *new(int);
void addnode_FIFO();
void traverse();
struct stu
{
    int info;
    struct stu *next;
}*p,*r,*temp,*head=0;
void main()
{
    int a,ch=1;
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
    {
    head=p;
    p->next=head;
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
            temp->next=p;
            p->next=head;
        }
    }
}
void traverse()
{
    temp=head;
    while(temp->next!=head)
    {
        printf("%d",temp->info);
        temp=temp->next;
    }
    printf("\n %d",temp->info);
}