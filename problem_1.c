#include <stdio.h>
#include <math.h>

/**
 * 
 * gets sum of integers from 0 -> max with a step
 * based on fibonacci recurrance relation (n^2 + n) / 2, 
 * where n is (n / step) sum is product times step
 *  
 * @param {int} (i.e. compute sum of n + (n + step))
 * @param {int} max
 * @return {int} sum of all consecutive integers within range
 */
int consecutiveSum(int step, int max) {
	max = floor(max / step);
	return step * floor((pow(max,2) + max) / 2);
} 

int main() {
	printf("%d \n",consecutiveSum(3, 999) + consecutiveSum(5, 999) - consecutiveSum(15, 999));
	return 0;
}
