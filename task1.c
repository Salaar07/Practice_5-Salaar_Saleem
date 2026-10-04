/* Input an integer year. Using a single if statement with composite conditions (&& and ||), print
"Leap Year" if the year is divisible by 400 OR (divisible by 4 AND NOT divisible by 100). Otherwise, print
"Not a Leap Year".*/
#include<stdio.h>
int main(){
	int year;
    printf ("Year: ");
    scanf ("%d", &year);
    if (year %4 == 0 && year %100 != 0)		printf ("Leap year ");
    if (year %4 != 0)		printf ("Not a Leap year ");
    return 0;
}