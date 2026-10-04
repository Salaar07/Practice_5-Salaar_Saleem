/* Input marks for three subjects. Using composite conditions (&& and ||), print:
o "Excellent" if all three marks are 80 or above.
o "Good" if all three marks are 60 or above.
o "Needs Improvement" if at least one mark is below 5*/
#include <stdio.h>
int main(){
	int sub1,sub2,sub3;
	printf ("Subject 1: ");
	scanf ("%d", &sub1);
	printf ("Subject 2: " );
	scanf ("%d", &sub2);
	printf ("Subject1 3: ");
	scanf ("%d", &sub3);
	//if (sub1>=80 && sub1 >=80 && sub1 >=80 )
	if (sub1 >=80 && sub2 >=80 && sub3 >=80) 	printf ("Excellent");
	if (sub1 >=60 && sub2>=60 && sub3>=60) 		printf ("Good ");
	if (sub1 <50 || sub2<50 || sub3 <50 ) 		printf ("Needs Improvement");
	return 0;
}