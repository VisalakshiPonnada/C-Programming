#include<stdio.h>
void movezeroes(int *num,int n)
{
    int i,j=0,temp;
    for(i=0;i<n;i++)
    {
        if(num[i]!=0)
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
            j++;
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",num[i]);
}
int main()
{
    int arr[10],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    movezeroes(arr,n);
}