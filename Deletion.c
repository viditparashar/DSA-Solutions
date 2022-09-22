// deletion

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
    printf("First array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Enter position\n");
    scanf("%d", &pos);

    for (int i = pos; i < n; i++)
    {
        a[i-1] = a[i];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
