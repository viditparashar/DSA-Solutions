/*

Question: Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems. 
Our Chef took the above advice very seriously and decided to set a target for himself.

Chef decides to solve at least 10 problems every week for 4 weeks.
Given the number of problems he actually solved in each week over 4 weeks as P1, P2, P3, P4. Output the number of weeks in which Chef met his target.

Input Format
There is a single line of input, with 4 integers P1, P2, P3, P4. These are the number of problems solved by Chef in each of the 4 weeks.

Output Format
Output a single integer in a single line - the number of weeks in which Chef solved at least 10 problems.

*/

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

