#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printNumsBackward(int start, int end);
int factorial(int n);
float feet2meters(float f_length);
float meters2feet(float m_length);
float average(int a, int b, int c);

void printNumsBackward(int start, int end) {
	for (int i = start; i >= end; i--) {
		printf("%d ", i);
	}
}

float feet2meters(float f_length) {
	float m_length;
	return m_length = f_length / 3.28;	
}

float meters2feet(float m_length) {
	float f_length;
	return f_length = m_length * 3.28;
}

int factorial(int n) {
	if(n == 0 || n ==1)
	{
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

float average(int a, int b, int c) {
	float avg;
	avg = (a + b + c) / 3;
	return avg;
}

int main() {

	int start, end, a, b, c, n;
	float f_length, m_length;
	
	do{
	printf("Enter a start and end number (# #): ");
	scanf("%i %i", &start, &end);
	if (start <= end) {
		printf("Error! Reenter and reverse numbers.\n");
	}
	}while (start <= end);
	printNumsBackward(start, end);
	printf("\n\n");

	printf("Enter feet distance: ");
	scanf("%f", &f_length);
	m_length = feet2meters(f_length);
	printf("%f\n\n", feet2meters(f_length));

	printf("%f\n\n", meters2feet(m_length));

	printf("Enter a number to find factorial: ");
	scanf("%i", &n);
	int factor = factorial(n);
	printf("Factorial of %i is %i\n\n", n, factor);
	
	printf("Enter 3 numbers to average: ");
	scanf("%i %i %i", &a, &b, &c);
	printf("The average is: %f\n", average(a, b, c));
		
	return 0;
}
