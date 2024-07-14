#include<stdio.h>
int main() {
	long int temp , n;
	n = 63;
	while (n >= 10) {
		temp = 1;
		while (n > 0) {
			temp = temp * (n % 10);
			n = n / 10;
		}pppppppppppppppppppppppppppp
		n = temp;
	}
	printf("%d", n);
}