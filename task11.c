/*Task 11: Input three distinct integers a, b, c. Using composite conditions 
(e.g., if ((a > b && a < c) || (a <b && a > c))), 
identify which variable contains the median (middle) value without sorting the
array/variables first.
Sample Input:
A: 25
B: 10
C: 42
Sample Output:
A (25) is the middle value*/
#include <stdio.h>
int main(){
	int a , b,c;
	printf ("Enter integer A:");
	scanf ("%d", &a);
	printf ("Enter integer B:");
	scanf ("%d", &b);
	printf ("Enter integer C:");
	scanf ("%d", &c);
	
	if (a>b && a<c)			printf ("A: %d is the Middle Value:", a);
	else if (b>a && b<c)	printf ("B:%d is the Middle  Value",b);
	else 					printf ("C:%d is the Middle  Value", c);
	return 0;		
}