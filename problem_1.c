#include <stdio.h>
#include <math.h>

/**
 * @param {int} (i.e. compute sum of n + (n + step))
 * @param {double} max
 * @return {double} sum of all consecutive integers within range
 */
double consecutiveSum(int step, double max) {
	max = floor(max / step);
	return step * floor((pow(max,2) + max) / 2);
} 

/**
 * Main function
 * finds consecutive sum of integers 0 -> 999 with a step of 5 + 
 *	integers 0 -> 999 with a step of 3
 **/
int main() {
	int sum = 0;
	for (int i = 0; i < 1000; i ++){
		if (i%3 == 0 || i%5==0)  sum += i;
	}
	printf("%d",sum);
	return 0;
}
