#include<stdio.h>
#include<string.h>
enum Days { sun = 1, mon, tue, wed, thu, fri, sat };
enum Months { jan = 1, feb, mar, apr, may, jun, jul, agust, sept, oct, nov, des };
int main()
{
	enum Days today;
	today = tue;
	printf("Nomor data tue: %d\n", today);
	
	enum Months bulan;
	char namaBln[11];
	for (bulan = jan; bulan <= des; bulan++) {
		switch(bulan) {
			case 1:
				strcpy(namaBln, "Januari");
				break;
			case 2:
				strcpy(namaBln, "Feb");
				break;
			case 3:
				strcpy(namaBln, "Mar");
				break;
			case 4:
				strcpy(namaBln, "Apr");
				break;
			case 5:
				strcpy(namaBln, "Mei");
				break;
			case 6:
				strcpy(namaBln, "Jun");
				break;
			case 7:
				strcpy(namaBln, "Jul");
				break;
			case 8:
				strcpy(namaBln, "Agus");
				break;
			case 9:
				strcpy(namaBln, "Sep");
				break;
			case 10:
				strcpy(namaBln, "Oct");
				break;
			case 11:
				strcpy(namaBln, "Nov");
				break;
			case 12:
				strcpy(namaBln, "Des");
				break;
	}	
		printf("bulan ke %d adalah %s\n", bulan, namaBln);
	}
 	return 0;
}
