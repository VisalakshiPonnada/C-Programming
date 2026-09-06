#include<stdio.h>
int main()
{
    int i,j,k,n;
    int arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n<0)
    {
        printf("No of elements are invalid");
        return 0;
    }
    scanf("%d",&k);
    int maxs=0;
    for(i=0;i<k;i++)
    {
        maxs+=arr[i];
    }
    for(i=1;i<=n-k;i++)
    {
        int sum=0;
        for(j=i;j<i+k;j++)
        {
          sum=sum+arr[j];
        }
            if(sum>maxs)
                maxs=sum;
    }
    printf("%d ",maxs);
}