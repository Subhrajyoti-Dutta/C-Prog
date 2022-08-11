/*
Question: Write a program to make a simple
		calculator using switch statement.
*/

#include <stdio.h>

int main() {
	int num1, num2, result;
	char op;

	printf("Enter two numbers separated by space: ");
	scanf("%d %d", &num1, &num2);
	printf("Enter an operator: ");
	scanf(" %c", &op);

	switch (op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("Invalid operator");
		return 0;
	}

	printf("%d %c %d = %d\n", num1, op, num2, result);
	return 0;
}

/*
Output 1:   Enter two numbers separated by space: 4 5
			Enter an operator: +
			4 + 5 = 9

Output 2:   Enter two numbers separated by space: 6 7
			Enter an operator: -
			6 - 7 = -1

Output 3:   Enter two numbers separated by space: 8 9
			Enter an operator: *
			8 * 9 = 72

Output 4:   Enter two numbers separated by space: 9 4
			Enter an operator: /
			9 / 4 = 2
*/