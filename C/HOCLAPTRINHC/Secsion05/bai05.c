#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	char ch;

	
	printf("nhao vao gia tri a: ");
	scanf_s("%d", &a);
	printf("\n");

	printf("nhap vao gia tri b: ");
	scanf_s("%d", &b);
	printf("\n");

	printf("nhap vao phep tinh: ");
	scanf_s(" %c", &ch); // lưu ý nếu để biến ch nhập sau cùng thì ta cần cách 1 cái mới để %c
	/*Vì char là chỉ có 1 ký tự, nên khi có khoảng trắng dư thừa vướng vào thì nó sẽ lấy khoảng 
	trắng đó thay vì lấy ký tự chúng ta nhập vào, dẫn tới bài toán sai
	còn nếu để phần nhập giá trị phép tính ch lên đầu thì bài toán bình thường 
	*/
	printf("\n");


	switch (ch)
	{
		case '+': printf("ket qua phep cong la: %d + %d = %d", a, b, c = a + b); break;
		case '-': printf("ket qua phep tru la: %d - %d = %d", a, b, c = a - b); break;
		case '*': printf("ket qua phep nhan la: %d * %d = %d", a, b, c = a * b); break;
		case '/': printf("ket qua phep cong la: %d / %d = %d", a, b, c = a / b); break;
		default:printf("khong the thuc hien phep tinh");
			break;
	}

	return 0;

}