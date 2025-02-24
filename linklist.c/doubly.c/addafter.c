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
}*p,*temp,*head=0;
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
    scanf("%d",a);
    p=new(a);
    printf("\n enter the item which do u want to add this new node");
    scanf("%d",item);
    addafter(item);
    print("\n the list is as follow after addbefore");
    traverse(head);
    getch();
}
struct stu *new(int a)
{
    p=(struct stu *)malloc(sizeof(struct stu));
    temp->info=a;
    temp->next=NULL;
    temp->pre=NULL;
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
        printf("\n%d",temp->info);
        temp=temp->next;
    }
}
/*to add a new node after the given item*/
void addafter(int item)
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->info=item)
        {

            p->next=temp->next;
            temp->next->pre=p;
            temp->next=p;
            p->pre=temp;
        }
        temp=temp->next;
    }
}