/*
Question: Given the values of x, y and z, write a program
	to rotate the values such that x has y, y has z
	and z has x.
*/

#include <stdio.h>

int main() {
	int x = 3, y = 7, z = 90;
	printf("Before rotation the values were:\n");
	printf("\tx = %d, y = %d, z = %d\n", x, y, z);
	int placeHolder;
	placeHolder = x;
	x = y;
	y = z;
	z = placeHolder;
	printf("After rotation the values are:\n");
	printf("\tx = %d, y = %d, z = %d\n", x, y, z);
	return 0;
}

/*
Output: Before rotation the values were:
				x = 3, y = 7, z = 90
		After rotation the values are:
				x = 7, y = 90, z = 3
*/