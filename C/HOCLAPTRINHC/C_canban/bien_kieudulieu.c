#include<stdio.h>
int main() {
	printf("hello toi la phuc \n");

	float a, b, c, d, tong, tich, thuong, hieu;
	printf("nhap vao so a: ");
	scanf_s("%.2f", &a);
	printf("\n");

	printf("nhap vao gia tri b: ");
	scanf_s("%.2f", &b);
	printf("\n");

	printf("nhap vao gia tri c: ");
	scanf_s("%.2f", &c);
	printf("\n");

	printf("nhap vao gia d: ");
	scanf_s("%.2f", &d);
	printf("\n");

	printf("\n");

	tong = a + b + c + d;
	tich = a * b;
	thuong = a / c;
	hieu = a - b;

	printf("tong cua: %2f + % .2f + %.2f + %.2f = %.2f \n", a, b, c, d, tong);
	printf("tich la: %.2f * %.2f = %.2f \n", a, b, tich);
	printf("thuong la : %.2f/%.2f = %.2f", a, c, thuong);
	printf("hieu la: %.2f - %.2f = %.2f", a, b, hieu);

	return 0;
	getch();



}
