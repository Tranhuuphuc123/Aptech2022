#include<stdio.h>
int main(){
   /* int n, i;

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
    }*/

    int n,i;

    printf("enter the num n: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("num %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("xuat mang cac gia tri\n");
    printf("-------------\n");

    int sum = 0;
    for(i=0;i<n;i++){
        sum +=arr[i];
        if(arr[i]==n){
            printf(" %d  =", arr[i]);
        }else{
            printf(" %d + ", arr[i]);
        }
    }

   
    
    return 0;
}