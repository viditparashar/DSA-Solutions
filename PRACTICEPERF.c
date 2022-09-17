#include <stdio.h>
int main(void) {
	int p1,p2,p3,p4;
	int i=0;
	if (1<=p1<=100 && 1<=p2<=100 && 1<=p3<=100 && 1<=p4<=100)
	{
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
	}
	else{
	    printf("Failed");
	}
	return 0;
}
