#include<stdio.h>
int main()
{
    int i,a[20],size;

    printf("enter the size:- ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        
    }
    printf(" Negative elements from an Array: ");
    for (i=0;i<size;i++)
    {
        if (a[i]<0)
         {
           printf("%d,",a[i]);
         }
       
    }
}