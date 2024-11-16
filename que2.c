#include<stdio.h>
void main()
{
    int i,j,a[10][10],row,column;
    

    printf("enter the row:-");
    scanf("%d",&row);

    printf("enter the column:-");
    scanf("%d",&column);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int largest=a[0][0]; 
    
    
    for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++) 
        {
            if(a[i][j]>largest)
            {
                largest=a[i][j];
            }
        }
    }

     printf("\n The largest element is:%d",largest);

}