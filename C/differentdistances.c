#include <stdio.h>
#include <math.h>

int main(void) {
	double x1, y1, x2, y2, p;
	
	while(1) {
		scanf("%lf", &x1); 
		
		if(x1 == 0)
			break;
		
		scanf("%lf %lf %lf %lf", &y1, &x2, &y2, &p);
		
		printf("%.10f\n", pow(pow(fabs(x1 - x2), p) + pow(fabs(y1 - y2), p), 1 / p)); 
	}
	return 0;
}