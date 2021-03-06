#include <stdio.h>
#include <limits.h>

int main(void) {
	int i, min, max, sum, tempSum, tempRunning, ansMin = INT_MAX, ansMax = 0;
	
	scanf("%d %d %d", &min, &max, &sum);

	for(i = min; i <= max; i++)	{
		tempRunning = i;
		tempSum = 0;
		
		while(tempRunning > 0) {
			tempSum += tempRunning % 10;
			tempRunning /= 10;
		}
		
		if(tempSum == sum) {
			if(i < ansMin)
				ansMin = i;
			if(i > ansMax)
				ansMax = i;
		}
	}
	
	printf("%d\n", ansMin);
	printf("%d\n", ansMax);
	
	return 0;
}