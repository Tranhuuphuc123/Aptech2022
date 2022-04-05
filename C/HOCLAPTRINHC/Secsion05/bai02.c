#include<stdio.h>
int main() {
	int a, b, hieu;

	printf("enter the num1: ");
	scanf_s("%d", &a);
	printf("\n");

	printf("enter the num2: ");
	scanf_s("%d", &b);
	printf("\n");

	hieu = a - b;

	if (hieu == a || hieu == b) {
		printf("hieu bang gia tri nhap vao: %d = %d", hieu, (hieu == a) ? a : b);

	}
	else {
		printf(" value %d not available", hieu);
	}

	return 0;
}
