#include <stdio.h>

int main()
{
    int i,n,ele=0,a[1000];

    printf("Enter the size of stack");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Add element");
    scanf("%d",&ele);
    
    n++;

    for (i=n-1;i>0;i--){
        a[i]=a[i-1];
    }

    a[0]=ele;

    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}


