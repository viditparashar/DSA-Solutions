#include <stdio.h>

int main()
{
    int a[100], b[100], n, i, j;
    printf("Enter the size of array");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
            b[i]=a[i];

    }
    printf("Main array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }
    printf("copied array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n", b[i]);
    }
  return 0;
}
