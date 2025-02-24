/*merge the two sorted array*/
#include<stdio.h>
void merge(int a[],int b[],int c[],int n1,int n2)
{
    int i,j,k;
    i=j=k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    /*array after merged*/
    printf("\n the resultant merge array is follows");
    for(i=0;i<k;i++)
    {
        printf("\n %d",c[i]);
    }
}
void main()
{
    int a[20],b[20],c[40],n1,n2,i,j,k;
    clrscr();
    printf("\n how many number what u want to input for first array 'a':");
    scanf("%d",&n1);
    if(n1>20)
    {
        printf("\n invalid size of array / try again:");
        getch();
        exit();
    }
    printf("\n enter the number of first array a in assending order");
    for(i=0;i<n1;i++)
    {
        printf("\n enter the number %d",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n how many number what u want to input for second array 'a'");
    scanf("%d",&n2);
    if(n2>20)
    {
        printf("\n invalid input array");
        getch();
        exit();
    }
    printf("\n enter the number of second array 'b' in assending order");
    for(i=0;i<n2;i++)
    {
        printf("\n enter the number %d",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n the first array 'a' is as follow");
    for(i=0;i<n1;i++)
    {
        printf("\n %d",a[i]);
    }
    printf("\n the second array is follow");
    for(i=0;i<n2;i++)
    {
        printf("\n %d",b[i]);
        merge(a,b,c,n1,n2);
        getch();
    }
}