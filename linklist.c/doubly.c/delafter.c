#include<stdio.h>
#include<conio.h>
struct stu *new(int);
void addnode_FIFO(p);
void traverse();
void delafter(item);
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
    delafter(item);
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
/*deletion a node after a given node*/
void delafter(int item)
{
    temp=head;
    while(temp->next!=NULL)
    {
        r=temp->next;
        /*if item is any node  except the second last node*/
        if((temp->info==item)&&(r->next!=NULL))
        {
            temp->next=r->next;
            r->next->pre=item;
            free(r);
        }
        /*if item is second last node i.e. last node r will be deleted*/
        else if((temp->info==item)&&(r->next==NULL))
        {
            temp->next=NULL;
            free(r);
        }
        temp=temp->next;
        /*if item is the last node and no node after this node */
        if((temp->info==item)&&(temp->next==NULL))
        {
            printf("\n this is the last node and no node after this node");
            printf("\n so deletion is not possible:");
            getch();
            exit();
        }
    }
}