#include<stdio.h>
int main() {
	double a, luong;
	int b, tuoi;


	printf("nhap vao so luong cua ban: ");
	scanf_s("%lf", &a);
	printf("\n");


	printf("nhap vao tuoi cua ban: ");
	scanf_s("%d", &b);
	printf("\n");

	luong = a;
	tuoi = b;
	printf("luong cua ban la %lf\n", luong);
	printf("tuoi cua ban la: %d", tuoi);


	return 0;
}