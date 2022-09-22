#include <stdio.h>
int main(void)
{
    int n, pos = 0, ele = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("First array");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    n++;
    printf("Enter element to insert\n");
    scanf("%d", &ele);
    printf("Enter position\n", &pos);
    scanf("%d", &pos);
    for (int i = n - 1; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
