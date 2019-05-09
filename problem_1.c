#include <stdio.h>
#include <math.h>

/**
 * Main function
 * finds consecutive sum of integers 0 -> 999 with a step of 5 + 
 *	integers 0 -> 999 with a step of 3
 **/
int main() {
	int sum = 0;
	for (int i = 0; i < 1000; i ++) if (i%3 == 0 || i%5==0)  sum += i;
	printf("%d",sum);
	return 0;
}
