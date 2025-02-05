// merge sort of array double with recursion

#include <_stdlib.h>
#include <stdio.h>
int compare(const void* a, const void* b)
{
	double* x = (double*)a;
	double* y = (double*)b;
	if (*x < *y)
		return -1;
	else if (*x > *y)
		return 1;
	else
		return 0;
}
int main(int argc, char* argv[argc + 1])
{
	double a[10] = {1.0, 3.0, 2.0, 4.0, 5.0, 7.0, 6.0, 8.0, 9.0, 10.0};
	mergesort(a,  0, 9, compare );
	for (int i = 0; i < 10; i++)
		printf("%f ", a[i]);
	printf("\n");
	return 0;
}
