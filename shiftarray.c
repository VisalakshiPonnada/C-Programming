#include<stdio.h>
int main()
{
    int i,n,r;
    char dir;
    scanf("%d",&n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf(" %c",&dir);
    scanf("%d",&r);
    if(r>n)
    r=r%n;
    if(dir=='r' || dir=='R')
{
    for(i=n-1;i>=r;i--)
    arr[i]=arr[i-r];
    for(i=0;i<r;i++)
    arr[i]=0;
}  
   if(dir=='l' || dir=='L')
   {
       for(i=0;i<n-r;i++)
       arr[i]=arr[i+r];
       for(i=n-r;i<n;i++)
       arr[i]=0;
   }
   for(i=0;i<n;i++)
   printf("%d ",arr[i]);
   return 0;
}