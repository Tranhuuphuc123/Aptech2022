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
	int a, bp;
	printf("nhap vao ham so a: ");
	scanf("%d", &a);
	printf("\n");
	
	bp = pow(a, 2);
	printf("gia tri binh phuong cua a: %d^2 = %d\n", a, bp);

	return 0;

}