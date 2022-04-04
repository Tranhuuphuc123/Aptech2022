#include<stdio.h>
#include<math.h>
int main() {

	// cach 1
	/*int a, binhPhuong;

	printf("nhap vao so a: ");
	scanf_s("%d", &a);
	printf("\n");

	binhPhuong = a * a;

	printf("so binh phuong cua a la: %d^2=%d",a, binhPhuong);*/



	// cach 2
	int a, b;
	printf("nhap vao ham so a: ");
	scanf_s("%d", &a);
	printf("\n");

	b = pow(a, 2);
	printf("gia tri binh phuong cua a: a^%d = %d", a, b);
	getch();
	return 0;

}