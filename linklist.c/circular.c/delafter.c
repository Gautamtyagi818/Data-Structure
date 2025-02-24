#include<stdio.h>
#include<conio.h>
struct stu *new(int);
void addnode_FIFO();
void traverse();
void addafter(item);
struct stu
{
    int info;
    struct stu *next;
}*p,*r,*temp,*head=0;
void main()
{
    int a,ch=1,item;
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
    printf("\n enter the content for new node:");
    scanf("%d",&a);
    p=new(a);
    printf("\n enter the node content before which you want to perform the deletion operation");
    scanf("%d",&item);
    addafter(item);
    printf("\n after deletion the modified linklist is as follow");
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
/*to perform the deletion operation*/
void addafter(int item)
{
    temp=head;
    if(head==NULL)
    {
        printf("\n deletion is not possible");
        getch();
        exit();
    }
    /*if it is the first node and second node to be deleted*/
    if(temp->info==item)
    {
        r=temp;
        temp=temp->next;
        r->next=temp->next;
        free(temp);
    }
    else
    {
        /*for other node*/
        while(temp->next!=head)
        {
            if(temp->info==item)
            {
                temp->next=r->next;
                free(r);
                break;
            }
            temp=temp->next;
            r=temp->next;
        }
    }
}