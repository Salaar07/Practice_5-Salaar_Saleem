/*Task 9: Generate four random integers w, x, y, z using rand(). Print all four values. Using explicit
composite if statements (e.g., if (w > x && w > y && w > z)), identify and print which specific variable
holds the strictly largest value.
Sample Input:
W: 104
X: 892
Y: 310
Z: 54
Sample Output:
X is Largest
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	int w,x,y,z;
	w = rand(),x = rand(),y = rand(),z = rand();
	printf ("W:%d\nX:%d\nY:%d\nZ:%d\n", w, x, y, z);
	if (w > x && w > y && w > z)		printf ("W is largest");	
	if (x > w && x > y && x > z)		printf ("X is largest");
	if (y > w && y > x && y > z)		printf ("Y is largest");
	if (z > w && z > x && z > y)		printf ("Z is largest");
	return 0;
}