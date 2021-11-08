#include <stdio.h>

int main(int argc, char const *argv[])
{

    printf("enter number of integer: ");
    int n;
    scanf("%d", &n);
    int bol = 0;

    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        int k;
        printf("enter value %d: ", i + 1);
        scanf("%d", &k);
        int j;
        for (j = 0; j < i; j++)
        {
            if (k == arr[j])
            {
                printf("You have entered %d already\n", k);
                bol = 1;
            }
        }
        arr[i] = k;
        if (bol)
        {
            i--;
            bol = 0;
        }
    }
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("%f", sum / n);

    return 0;
}
