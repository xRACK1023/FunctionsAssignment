#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void printNumsBackward(int start, int end);

void printNumsBackward(int start, int end){
	for (int i = end; i >= start; i--) {
		printf("%d ", i);
	}
}

int main() {

	int start, end;

	printf("Enter a start and end number (# #): ");
	scanf("%i %i", &start, &end);
	printNumsBackward(start, end);

	return 0;
}
