// bai tap 04 nhap diem xet hoc luc

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() {
	int diem;

	printf("enter your point: ");
	scanf_s("%d", &diem);
	printf("\n");

	if (diem >= 75) {
		printf("level of you: A");
	}
	else if (diem >= 60) {
		printf("level of you: B");
	}
	else if (diem >= 40) {
		printf("level of you: C");
	}
	else if (diem >= 30) {
		printf("level of you: D");
	}
	else {
		printf("level of you: E");
	}

	return 0;
}