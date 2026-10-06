/*Task 8: Input a single character ch. Using composite conditions, classify and print whether it is an
"Uppercase Vowel", "Lowercase Vowel", "Digit", or "Other Character".
Sample Input:
E
Sample Output:
Uppercase Vowel
*/
#include<stdio.h>
int main(){
	unsigned char user ; 
	scanf ("%c", &user);
	//printf ("User Input: %c", user);
	unsigned char  upvowel = user == 'A' || user =='E' || user =='I'|| user =='O' || user =='U';
	unsigned char lowvowel = user == 'a' || user =='e' || user =='i'|| user =='o' || user =='u';
	unsigned char digit = user >='0' && user <='9';
	if (upvowel)		printf ("Upper case vowel");
	if (lowvowel)		printf ("Lower case vowel");
	if (digit)	    	printf ("Digit");
	if (!(upvowel || lowvowel || digit)) 	printf ("Other Character");
	return 0;	
}