#include<stdio.h>
void leaders(int *num,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[j]>num[i])
            break;
        }
        if(j==n)
        printf("%d ",num[i]);
    }
}
int main()
{
    int arr[10],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    leaders(arr,n);
}