#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d", &n);

    // int arr[n];
    // for(int i=1; i<=n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // for(int i=1; i<=n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n-1;

    for(int i=0; i<n; i++) // for line printing
    {
        for(int j=0; j<space; j++) // for space printing
        {
            printf(" ");
        }

        for(int j=0; j<star; j++) // for star printing
        {
            printf("*");
        }

        printf("\n");
        star+=2;
        space--;
    }

    return 0;
}