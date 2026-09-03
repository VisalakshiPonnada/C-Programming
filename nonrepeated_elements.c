#include<stdio.h>
void nonrepeated(int *num, int n)
{
    int i, j, cnt;

    for(i = 0; i < n; i++)
    {
        cnt = 0;

        for(j = 0; j < n; j++)
        {
            if(num[i] == num[j])
                cnt++;
        }

        if(cnt == 1)
            printf("%d ", num[i]);
    }
}
int main()
{
    int arr[7],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    nonrepeated(arr,n);
    return 0;
}