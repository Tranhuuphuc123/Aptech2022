// bai tap 04 nhap diem xet hoc luc

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int  main() {
	int diem;

	// cach 01
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

	// cach 02

	/*
	printf("enter point: ");
	scanf_s("%d", &diem);
	printf("\n");

	switch (diem) {
	case 75:
		printf("level of you: A");
		break;
	case  60 ... 70:
		printf("level of you: B"); 
		break;
	case  40 ... 60:
		printf("level of you: C"); 
		break;
	case  30 ... 40:
		printf("level of you: B"); 
		break;
	default:printf("level of you: E");
	   break;
	}
	*/

	return 0;
}