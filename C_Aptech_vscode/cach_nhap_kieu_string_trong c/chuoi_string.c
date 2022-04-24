#include<stdio.h>
int main(){
	char name[30];
	printf("enter the name: ");
	fgets(name, sizeof(name), stdin);
/*   vi ham scanf khong ho tro nhap ten co khoang trang
neu nhap ten ma co khoang trang thi no chi ghi nho ket qua dau cua ten nen 
ta thay the bang fgets va puts de giup nhap kieu string trong c duoc 
lien mach khong bi mat dong
*/
	printf("name: ");
	puts(name);

}