/*Task 6: Input an integer amount. First, check if the amount is positive and a multiple of 100 using
composite conditions (amount > 0 && amount % 100 == 0). If valid, calculate and print the number of
1000, 500, and 100 notes required; otherwise, print "Invalid Amount: Must be a positive multiple of
100".
Sample Input:
2700
Sample Output:
1000 Notes: 2
500 Notes: 1
100 Notes: 2
*/
#include<stdio.h>
int main(){
	int amount;
	scanf("%d", &amount);
	if (amount > 0 && amount % 100 == 0){
	printf ("1000 Notes: %d\n", amount/1000);
	int rem_amount = amount %1000;
	printf ("500 Notes: %d\n", rem_amount/500);
	rem_amount = rem_amount % 500;
	printf ("100 Notes: %d\n", rem_amount/100);		
	}
	return 0;
}