https://www.codechef.com/submit/TODOLIST

#include <stdio.h>

int main(void) {
	int t;

	scanf("%d",&t);
	
	while(t--){
		//declare values in while loop so that values of count doesn't set to 0 again.
		int n,i,count=0,a[1000];
		scanf("%d",&n);
		for(i=0;i<n;i++){
			
			scanf("%d",&a[i]);
			if((a[i])>=1000){
				count = count + 1;
                
                        }
	        }
		printf("%d\n",count);
           
	}
	    
	return 0;
}
