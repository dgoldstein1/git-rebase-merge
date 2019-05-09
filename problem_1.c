#include <stdio.h>
#include <math.h>

/**
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
