#include<stdio.h>
int fpb(int a, int b);
int kpk(int a, int b);

int fpb(int a, int b) {
      if(b == 0)
            return a;
      else
            return fpb(b, a % b)
}

int kpk(int a, int b) {
      int FPB = fpb(a, b);
      int kpk = (a * b) / FPB;
      return kpk;
}

int main(void) {
      int num1, num2;
      printf("1: "); scanf("%d", &num1);
      printf("2: "); scanf("%d", &num2);
      printf("FPB: %d\n", fpb(num1, num2));

      int num3, num4;
      printf("3: "); scanf("%d", &num3);
      printf("4: "); scanf("%d", &num4);
      printf("KPK: %d\n", kpk(num3, num4));
      return 0;
}