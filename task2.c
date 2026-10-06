/*Input an integer n. Using composite conditions (&&), print the exact classification among
"Positive Even", "Positive Odd", "Negative Even", "Negative Odd", or "Zero".*/
#include <stdio.h>
int main(){
	int number;
	scanf ("%d", &number);
	if (number > 0 && number%2 == 0)	printf("Positive Even");
	if (number > 0 && number%2 > 0)		printf("Positive Odd");
	// check if (number > 0 && number %2 != 0) == and != are easy to evaluate by the compiler
	if (number < 0 && number%2 == 0)	printf("Negative Even");
	if (number < 0 && number%2 < 0)		printf("Negative Odd ");
	// check if (number < 0 && number %2 != 0) == and != are easy to evaluate by the compiler
	if (number ==0)						printf ("Zero");
	return 0;
}
