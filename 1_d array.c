//signals operating system to runthe program of 1_d array
#include<stdio.h>
int main()
{
    int arr[5],i,j=0;
    for (i=0;i<5;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        j+=arr[i];
    
    }
    printf("\nsumof elements=%d",j);
    return 0;
}
