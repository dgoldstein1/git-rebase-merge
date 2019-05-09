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
	printf("%f \n",consecutiveSum(3, 999) + consecutiveSum(5, 999) - consecutiveSum(15, 999));
	return 0;
}
