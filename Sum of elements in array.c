#include <stdio.h>

int main() {
    int a[100],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int sum=0;
    for(i=0;i<n;i++){
        sum = sum + a[i];
    }
    printf("%d",sum);
    
    

    return 0;
}
