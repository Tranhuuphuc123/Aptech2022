#include<stdio.h>
int main(){

	/*
	char name[30];
	printf("enter the name: ");
	fgets(name, sizeof(name), stdin);
/*   vi ham scanf khong ho tro nhap ten co khoang trang
neu nhap ten ma co khoang trang thi no chi ghi nho ket qua dau cua ten nen 
ta thay the bang fgets va puts de giup nhap kieu string trong c duoc 
lien mach khong bi mat dong
*/
/*
	printf("name: ");
	puts(name);*/




	// cach 02

	char name[30];

	printf("enter the name: ");
	gets(name);

	printf("name: %s", name);
	return 0;




// cach 03
/*
	char name[30];
	char lastname[30];

	printrf("\n enter the fullname: ");
	scanf("%s", lastname);
	gets(name);
	printf("name of you: %s %s",lastname, name);
	return 0;*/
}