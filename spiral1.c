#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100
int main()
{  unsigned char A[MAX][MAX];
   unsigned int n, i;    

    do {
      scanf(" %d",&n);
      if ( n % 2 == 0 )
        puts("ulang isi n");
    } while (n % 2 == 0 );
   //char kal[100];
   //gets(kal);
   //strcpy(kal, "Jambi kota indah sekaliii");
   //n=sqrt(strlen(kal)); 
   //printf("%d\n\n", n);
   int x = n / 2;
   int y = n / 2;
   int z = 1;
   int k = 0;
   int dir = 0; 
   for ( i = 1;  i < n*n ; i++ )
    {  
       A[y][x] = i;
       switch(dir)
        { case  0 : y--; break;
          case  1 : x--; break;
          case  2 : y++; break;
          case  3 : x++; break;  
        }
       if ( i %  z == 0 ) 
         { dir++;
           if ( dir > 3 ) 
            dir = 0;
         }
       k++; 
       if ( k == 2 * z )
        {
            k = 0;
            z++;
        }
    }
    
    for ( i = 0;  i < n; i++ )
    {
        for( y = 0; y < n; y++ )
         printf("%3d", A[i][y]);
        puts("");
    }
       return 0;          
}
