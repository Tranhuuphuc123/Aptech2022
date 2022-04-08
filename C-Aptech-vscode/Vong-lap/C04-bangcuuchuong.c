#include<stdio.h>
int main(){
    int so;

    printf("enter the num: ");
    scanf("%d", &so);

    printf("bang cuu chuong %d la:\n", so);
    printf("---------------\n");

    for(int i=0; i<=10; i++){
       
          printf("%d x %d = %d\n", so, i, so*i);
    }
  
    return 0;
}