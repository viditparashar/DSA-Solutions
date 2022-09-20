#include <stdio.h>

int main()
{
    int a[100], b[100], n, i, j;
    int count=0;
    printf("Enter the size of array");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count=count+1;
            }
        }
        }
   
    printf("%d",count);

    return 0;

} 
