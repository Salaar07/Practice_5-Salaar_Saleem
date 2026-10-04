/*Input three side lengths a, b, and c. Using a single composite if statement,
 check if all sides are
positive and satisfy the triangle inequality theorem(a + b >c, a + c >b, and b + c > a). 
Print "Valid
Triangle" if true, else "Invalid Triangle"*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf ("Enter 3 sides");
	scanf ("%d%d%d", & a, &b, &c);
	if (a > 0 && b > 0 && c > 0 && a+b>c && a+c>b && b+c>a)	   printf ("Valid Triangle");
	if (a<0 || b<0 || c<0 || (a+b)<=c || (a+c)<=b || (b+c)<=a)		printf ("Invalid Triangle ");
	return 0;
}