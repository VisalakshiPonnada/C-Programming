#include <stdio.h>
int main()
{
    int SIZE;
    scanf("%d", &SIZE);
    if(SIZE < 1 || SIZE > 100)
    {
        printf("No of elements are invalid\n");
        return 0;
    }
   int a[100], i;
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    char choice;
    scanf(" %c", &choice);
    int nOR;
    scanf("%d", &nOR);
    while(nOR > 0)
    {
        int temp;
        if(choice == 'r')
        {
            
            temp = a[SIZE - 1];
            for(i = SIZE - 1; i > 0; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = temp;
        }
        else if(choice == 'l')
        {
            for(i = 0; i < SIZE - 1; i++)
            {
                a[i] = a[i + 1];
            }

            a[SIZE - 1] = temp;
        }

        nOR--;
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}