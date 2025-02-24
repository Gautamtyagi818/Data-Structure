#include<stdio.h>
int top=-1;
int stack[20];
void push(int*,int,int);
int pop(int*);
void display(int*);
void main()
{
    int data,ch,size;
    clrscr();
    printf("\n enter the size of stack:");
    scanf("%d",size);
    if(size>20)
    {
        printf("\n invalid size,it can not be greater than 20");
        getch();
        exit();
    }
    do
    {
        printf("\n\n available options are as follow");
        printf("\n\n\t press 1 to push an element to the stack");
        printf("\n\n\t press 2 to pop the element from the stack");;
        printf("\n\n\t press 3 to quitefrom the applecation");
        printf("\n\n\t enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n\n enter the element to push to stack");
            scanf("%d",&data);
            push(stack,size,data);
            printf("\n\n after performing the push operation the stack is follows:");
            display(stack);
            break;
            case 2:
            data=pop(stack);
            printf("\n\n the poped data is:%d",data);
            printf("\n\n after performing  pop operation the stack is as follow:");
            display(stack);
            break;
            case 3:
            exit();
        }
    }while(ch!=3);
    getch();
}
/*push operation*/
void push(int *s,int size,int d)
{
    if(top==size-1)
    printf("\n insertion is not possible due to stack full i.e. stack overflow:");
    else{
        top=top+1;
        s[top]=d;
    }
}
/*pop operation*/
int pop(int *s)
{
    int poped_element;
    if(top==-1)
    {
        printf("\n deletion is not possible i.e. stack underflow:");
        return 0;
    }
    else
    {
        poped_element=s[top];
        top--;
    }
    return poped_element;
}
/*display operation*/
void display(int s[])
{
    int i;
    if(top==-1)
    printf("\n\n stack is empty");
    else;
    {
        for(i=top;i>=0;i--)
        printf("\n%d",s[i]);
    }
}