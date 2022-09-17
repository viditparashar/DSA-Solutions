#include <stdio.h>

int main(void) {
	int p1,p2,p3,p4;
	int i=0;
	printf("Enter the problems you in week 1,2,3,4\n");
	scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
	if (p1>=10){
        i=i+1;
        }
    if (p2>=10){
        i=i+1;
        }
    if (p3>=10){
        i=i+1;
        }
    if (p4>=10){
        i=i+1;
        }
	    
	printf("%d",i);
	
	return 0;
}

