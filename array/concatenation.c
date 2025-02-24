#include<stdio.h>
int main()
{
    int n1,n2,i,j;
    int a[20],b[20],c[40];
    /*input number of element for first array*/
    printf("how many numbers you want to input first array\n");
    scanf("%d",&n1);
    /*check for maximum size*/
    if(n1>20)
    {
        printf("invalid input/number of element is less than 20");
       getch();
       exit();
    }
    for(i=0;i<n1;i++)
    {
        printf("enter the %d number : ",i+1);
        scanf("%d",&a[i]);
    }
    /*input number of element for second array*/
    printf("how many number do you want to input second array\n");
    scanf("%d",&n2);
    /*check for maximum size*/
    if(n2>20)
    {
        printf("invalid input/number of element is less than 20");
        getch();
        exit();
    }
    for(i=0;i<n2;i++)
    {
        printf("enter the %d number : ",i+1);
        scanf("%d",&b[i]);
    }
    /*print first array*/
    printf("the first array is follow\n");
    for(i=0;i<n1;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    /*print second array*/
    printf("the second array is follow\n");
    for(i=0;i<n2;i++)
    {
        printf("b[%d]=%d\n",i,b[i]);
    }
    /*concatenate of two array a and b*/
    /*copy first array*/
    i=0;
    for(j=0;j<n1;j++)
    {
        c[i]=a[j];
        i++;
    }
    /*copy second array*/
    i=0;
    for(j=n2;j<n1+n2;j++)
    {
        c[j]=b[i];
        i++;
    }
    /*print the array after concatenation*/
    printf("array after concatenation is follow\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("c[%d]=%d\n",i,c[i]);
    }
}