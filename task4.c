/*Input an integer. 
Using composite conditions, check if the number lies within the range [10, 99]
and is an even number. If both conditions hold, print "Valid Even Two-Digit Number";
otherwise, print
"Out of Range or Odd".
Sample Input:
N: 46
Sample Output:
Valid Even Two-Digit Number*/
#include <stdio.h>
int main(){
	int num;
	printf ("Integer: ");
	scanf ("%d", &num);
	if (num >=10 && num <= 99 && num%2 == 0) 	 printf ("Valid two digit number");
	if (num <10 || num >99 ||  num%2 != 0)		     printf ("Out of range or odd");
	return 0;
}