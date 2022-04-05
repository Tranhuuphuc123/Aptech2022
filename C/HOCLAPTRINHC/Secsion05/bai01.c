// bai 01 yeu cau tinh luong cua nhan vien


#include<stdio.h>
#include<conio.h>
int main() {
	char name;
	int ba, da; // phan tram cua D.A basic va phan tram loi tuc daper
	float bon, lonet; // phan tram cua bonper ( phan tram loi tuc) va loandet(tien vay bi khau tru)

	printf("enter yourname:");
	scanf_s("%c", &name);
	printf("\n");
	/*để nhập tên họ kiểu chũi ta có thể khai báo như sau:
				  char ho[30];
				  char ten[30];
				  int basic, dapter;
				  float bonder, loandet;

				  printf("nhap ho va ten: ");
				  scanf("%s",ho);
				  gets(ten);
				  printf("\n");

				  printf(" %s %s", ho, ten);

		--> do la trong visual code khong ho tro ham  gets nen cach tren bi loi
*/

	printf("enter %% D.A of basic: ");
	scanf_s("%d", &ba);
	printf("\n");

	printf("enter %% daper: ");
	scanf_s("%d", &da);
	printf("\n");

	printf("enter %% of bonper: ");
	scanf_s("%f", &bon);
	printf("\n");

	printf("enter %% of loandet: ");
	scanf_s("%f", &lonet);
	printf("\n");

	float salary = ba + ba * da / 100 + bon * ba / 100 - lonet;

	printf("name: %c \t \t basic: %d \t\t salary: %.2f $", name, ba, salary);
	
	return 0;

}
