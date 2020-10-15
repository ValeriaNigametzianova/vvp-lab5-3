#include <stdio.h>

int main()
{
	int A, B, C, AC, BC;
	printf("Enter A,B,C:\n");
	scanf_s("%d%d%d", &A, &B, &C);
	if (((C > A) && (C < B)) || ((C > B) && (C < A)))
	{
		AC = C - A;
		BC = B - C;
		printf("The product of the segments is equal to %d", AC * BC);
	}
	else
	{
		printf("Incorrect location of point C");
	}
	return 0;
}

