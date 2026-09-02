#include<stdio.h>
void removeduplicate(int *arr,int n)
{
    int i,j,k;
    for(i = 0; i < n; i++)
{
    int already = 0;
    for(j = 0; j < i; j++)
    {
        if(arr[i] == arr[j])
        {
            already = 1;
            break;
        }
    }
    if(already == 1)
        continue;
    for(j = i + 1; j < n; j++)
    {
        if(arr[i] == arr[j])
        {
            printf("%d ", arr[i]);
            break;
        }
    }
}
}

int main()
{
    int arr[7],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    removeduplicate(arr,n);
    return 0;
}
