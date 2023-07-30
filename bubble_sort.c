#include <stdio.h>
int main()
{
      int a[] = {4, 1, 3, 2, 5, 6, 9, 7, 10, 8};
      for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
      {
            for (int j = 0; j < (sizeof(a)/sizeof(a[0])-1); j++)
            {
                  if (a[j] > a[j+1])
                  {
                        int tem = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = tem;
                  }
            }
      }
      for (int k = 0; k < sizeof(a)/sizeof(a[0]); k++)
      {
      	printf("a[%d] = %d\n", k, a[k]);
	}
}