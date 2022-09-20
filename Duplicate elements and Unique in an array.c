#include <stdio.h>
/*Count the number of repeating elements and the number of unique elements and print them*/


int main()
{
    int a[100], b[100], n, i, j;
    int count=0,sum=0;
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
                break;
            }
        }
        for (j=i+1;j<n;j++){

            if(a[i]==a[j]){
                sum=sum+1;
                }

            
        }
    }

    printf("the number of repeating elements= %d\n",count);
    printf("the number of unique elements= %d\n",n-(count+sum));

    return 0;

}
