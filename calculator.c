#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char operator;
	printf("Choose operator(+,-,*,/):");
	scanf("%c", &operator);
	
	double number1, number2;
	printf("Enter 1st number:");
	scanf("%lf",&number1);
	printf("Enter 2nd number:");
	scanf("%lf", &number2);

	double result;
	switch (operator)
	{
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		result = number1 / number2;
		break;

	default:
		printf("Invalid input");
		break;

	}
	printf("%.2lf", result);
	getch();
	return 0;
}
