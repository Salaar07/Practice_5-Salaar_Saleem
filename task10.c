/*Task 10: Generate three random integers x, y, z using rand(). Using composite conditions, check if there
is a unique smallest value (e.g., x < y && x < z). If a unique smallest exists, print its value; if two or more
variables share the minimum value, print "No unique smallest value".
Sample Input:
X: 45
Y: 12
Z: 12
Sample Output:
No unique smallest value*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	int x,y,z;
	x = rand(),y = rand(),z = rand();
	printf ("X:%d\nY:%d\nZ:%d\n", x, y, z);
	if (x<y){
		if (y<z)			printf("X:%d	Y:%d	Z:%d\n", x, y, z);
		else if (x<z)		printf ("X:%d	Z:%d	Y:%d\n", x, z, y);
		else 				printf ("Z:%d	X:%d	Y:%d\n", z, x, y);
	}
	else if (y<x){
		if(x<z) 			printf ("Y:%d	X:%d	Z:%d\n", y, x, z);
		else if (y<z)		printf ("Y:%d	Z:%d	X:%d\n", y, z, x);
		else				printf ("Z:%d	Y:%d	X:%d\n", z, y, x);		
	}
	return 0;	
}