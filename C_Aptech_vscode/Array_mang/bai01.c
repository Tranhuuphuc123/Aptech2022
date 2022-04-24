#include<stdio.h>
int main(){
    int n, i;

    printf("enter the num n: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the num %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("xuat cac gia tri mang \n");
    printf("-----------\n");
    
    for(i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}