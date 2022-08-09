/*
Question: A survey of the computer market shows that
	personal computers are sld at varying cost by the
	vendors, the following is the list of cost (in 1000s)
	quoted by some vendors:
		i.    35.00
		ii.   40.50
		iii.  25.00
		iv.   31.25
		v.    68.15
		vi.   47.00
		vii.  26.65
		viii. 29.00
		ix.   53.45
		x.    62.50
	Determine the avg. cost and the range of the values
	(by using goto statement).
*/

#include <stdio.h>

int main() {
	double price, sum, min, max;
	int count = 10;
	printf("Enter the price of PC: ");
	scanf("%lf", &price);
	sum += price;
	min = price;
	max = price;
	count--;
NEXT:
	printf("Enter the price of next PC: ");
	scanf("%lf", &price);
	sum += price;
	if (price < min)
		min = price;
	else if (price > max)
		max = price;
	count--;
	if (count > 0)
		goto NEXT;
	printf("The average price is: %lf\n", sum / 10.0);
	printf("The minimum price is: %lf\n", min);
	printf("The maximum price is: %lf\n", max);
	return 0;
}