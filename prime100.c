#include <stdio.h>

int main()
{
    int n;
    // printf("Enter n : ");
    // scanf("%d",&n);
    int flag;

    for (int i = 2; i <= 100; i++)
    {
        flag = 0;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                printf("%d-not prime\n ", i);
                flag = 1;
                break;
            }
        }
        if (flag==0)
        
            printf("%d- prime \n", i);
                
    }
    return 0;
}
