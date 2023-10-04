#include <stdio.h>
#include <math.h>
int main() {
    float N;
    int hasilBawah, hasilAtas;
    scanf("%f", &N);
    if (N - (int)N < 0.5)
    	printf("%d", (int)N);
    else
    	printf("%d", (int)N + 1);
    hasilBawah = (int)N;
    printf("%d", hasilBawah);
    return 0;
}
