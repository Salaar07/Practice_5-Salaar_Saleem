/*Task 7: Input total seconds. Convert to hours, minutes, and seconds. Using composite conditions, if the
time is strictly less than 60 seconds, print "Less than one minute"; if it is between 3600 and 86400
seconds inclusive, print "Within one day range".
Sample Input:
Seconds: 45
Sample Output:
Hours: 0
Minutes: 0
Seconds: 45
Less than one minute*/
#include<stdio.h>
int main(){
	int totSecs;
	int hrs, mins ,remainingSecs;
	scanf("%d", &totSecs);
	hrs = totSecs/(60*60);
	remainingSecs = totSecs%(60*60);
	mins = remainingSecs/60;
	remainingSecs %= 60;
	printf ("Hours: %d\nMinutes: %d\nSeconds: %d\n",hrs, mins ,remainingSecs);
	if (totSecs< 60)		printf ("Less than 60 seconds");
	if (totSecs>= 3600 && totSecs <86400)		printf("Within one day range");
	return 0;
}