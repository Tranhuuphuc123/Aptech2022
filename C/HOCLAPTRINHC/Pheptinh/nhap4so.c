#include<stdio.h>
int main() {

	float a, b, c, d, e, f;
	printf("nhap vao so a: ");
	scanf_s("%f", &a);
	printf("\n");

	printf("nhap vao so b: ");
	scanf_s("%f", &b);
	printf("\n");

	printf("nhap vao so c: ");
	scanf_s("%f", &c);
	printf("\n");

	printf("nhap vao so d: ");
	scanf_s("%f", &d);
	printf("\n");

	e = a + b + c + d;
	f = (a + b + c + d) / 4;

	printf("ket qua phep tinh: e =%.2f \n", e);
	printf("ket qua phép chia: f = %.2f", f);

	getch();
	return 0;
}