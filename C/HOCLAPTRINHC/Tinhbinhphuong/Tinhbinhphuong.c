#include<stdio.h>
int main() {
	int a, binhPhuong;

	printf("nhap vao so a: ");
	scanf_s("%d", &a);
	printf("\n");

	binhPhuong = a * a;

	printf("so binh phuong cua a la: %d^2=%d",a, binhPhuong);

	getch();
	return 0;

}