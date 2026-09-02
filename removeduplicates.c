#include <stdio.h>
int removeDuplicates(int *nums, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(nums[i] == nums[j])
            {
                for(int k = i; k < n - 1; k++)
                {
                    nums[k] = nums[k + 1];
                }

                n--;
                i--;
                break;
            }
        }
    }

    return n;
}
int main()
{
    int num[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    n = removeDuplicates(num, n);
    printf("After removing duplicates: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}