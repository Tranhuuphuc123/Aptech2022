//bai03 tinh loai nhan vien và muc thuong tương duong
#include<stdio.h>
#include<conio.h>
int main() {
	float luong;
	char xepLoai;

	printf("\n enter salary of employee \$: ");
	scanf_s("%f", &luong);

	
	printf("\n enter level of employee: ");
	scanf_s(" %c", &xepLoai);
	printf("\n");

	if (xepLoai == 'A' || xepLoai == 'a') {
		printf("salary of level %c: %.2f \$\n", xepLoai, luong + 300);
	}
	else if (xepLoai == 'B' || xepLoai == 'b') {
		printf("salary of level %d: %.2f \$\n", xepLoai, luong + 250);
	}
	else {
		printf("salary of employees: %.2f \$", luong + 100);
	}

	return 0;

}
