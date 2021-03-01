#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int inputParameters(double* x, double* y, float* radius)
{
	
	return 0;
}

int main()
{
	double x1, x2, y1, y2;
	float radius1, radius2;
	
	printf("First shape: \n");
	
	if (inputParameters(&x1, &y1, &radius1) != 0)
		exit(1);
		
	printf("x = %.3f, y = %.3f, radius = %.3f\n", x1, y1, radius1);
	float P1 = 2 * 3.14 * radius1;
	float S1 = 3.14 * pow(radius1, 2);
	printf("perimeter = %.3f, area = %.3f\n", P1, S1);
	printf("\n");
	
	printf("Second shape: \n");
	
	if (inputParameters(&x2, &y2, &radius2) != 0)
		exit(1);
		
	printf("x = %.3f, y = %.3f, radius = %.3f\n", x2, y2, radius2);
	float P2 = 2 * 3.14 * radius2;
	float S2 = 3.14 * pow(radius2, 2);
	printf("perimeter = %.3f, area = %.3f\n", P2, S2);
	printf("\n");
	
	return 0;
}
