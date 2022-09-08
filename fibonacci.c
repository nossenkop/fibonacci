#include <stdio.h>

int main() {
   int i,n=10;

   int x = 0;
   int y = 1;
   for (i=1; i<=n; ++i) {
	int fib = x + y;
	printf("%d ", x);
	x = y;
	y = fib;
   } 
   return 0;
}
