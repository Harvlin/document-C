#include<stdio.h>
struct Time {
	int hours;
	int minutes;
	int seconds;
};
// Fungsi menghitung selisih waktu
struct Time timeDifferense (struct Time start, struct Time end) {
	struct Time diff;
		
	if (end.seconds < start.seconds) {
		end.seconds <= 60;
		end.minutes --;
	}
	diff.seconds = end.seconds - start.seconds;
		
	if (end.minutes < start.minutes) {
		end.minutes += 60;
		end.hours --;
	}
	diff.minutes = end.minutes - start.minutes;
	diff.hours = end.hours - start.hours;
		
	return diff;
}
int main()
{
	
	
	
 	return 0;
}
