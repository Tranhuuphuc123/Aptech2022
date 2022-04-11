 
#include<stdio.h>
int main(){
    //bai 01 tong cac so nguyen tu 1 toi
    /*int n;
    int tong = 0;

    printf("enter the num n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        tong =tong+i;
    }
    printf("tong so nguyn N la: N = 1+2+3...+n = %d", tong);*/





    // bai 02 tinh tong cac so chan tu 2 toi n
  /*  int i,n;
    int tong = 0;

    printf("enter the num n: ");
    scanf("%d",&n);

    printf("cac so chan bao gom: \n");
    for(i=1;i<=n;i++){
        
        if(i%2==0){
            tong = tong+i;
            
            printf(" %d ",i);
        }
    }
    printf("\ntong cac so chan la: tong = 2+4+6+...n= %d", tong);*/



    // bai 03 tim a tinh tong cac so nguyen to
/*
    int n;
    int tongNT = 0;
    int snt = 1;

    printf("\n enter the num n: ");
    scanf("%d", &n);
    printf("--------------------------\n");

    for(int i = 2; i <= n; i++){
        snt = 1;                                                                                                                                                                                                                                                 
        for(int j = 2; j <=i; j++){
            if(i%j==0 && j!=i){
                snt = 0;
                printf(" so khong phai so nt: %d ", i);
                break;
            }
        }
        if(snt == 1){
            printf(" so nguyen to: %d ", i);
            tongNT = tongNT + i;

        }
    }
    printf("-------------------------------------------------------\n");
    printf("\n tong cac so nguyen to la: Tong = %d ", tongNT);*/


    // bai 04 tong cac so nguyen chia het cho x
/*
    int n, x;
    int tong =0;

    printf("\n enter the num n: ");
    scanf("%d", &n);
    printf("\n enter the num x: ");
    scanf("%d", &x );

    printf("----------\n"); 
    printf("cac so chia het cho %d la: \n", x);

    for(int i=1; i<=n; i++){
        if(i%x==0){
            tong += i;
            printf(" %d ", i);
        }
    }
    printf("\n tong cac so chia het cho x: tong =  %d",tong);*/




    // bai tap bo sung tinh giai thua

   /* int n;
    int giaiThua =1;

    printf("\n enter the num n: ");
    scanf("%d", &n);

    printf("--------------------------------\n");
    printf("cac so la giai thua cua %d \n", n);
    int i = 1;
    while (i<=n){
        giaiThua *= i;
        printf(" %d ",i);
        i++;
    }
    printf("\n tich cac giai thua cua %d la: %d",n,giaiThua);*/


    // bai tap bo sung tinh tong cac so nguyen duong tat ra tu so nguyen ban dau nhap vao gia
    /*
      int n, tachSo, tong = 0;

    printf("\n enter the num n: ");
    scanf("%d", &n);

    printf("--------------\n");
    printf("cac so  nguyen cua n sau khi tach la: \n");

     
    while(n!=0){
        
        tachSo = n%10;// chia lấy dư cho 10 để ra tach so ra vd 12%10 se duoc 1 du 2, luc nay da tach 1 va 2 
        n /=10; // dung phep chia nguyen de xoa so cui n vd kieu int hieu la 12/10=1.2 thi tuc la 1 khong lay phan
                // phan thap phan sao dau phay
              
        tong += tachSo;
        printf(" %d ",tachSo);
        
        
    }
    printf("\n tong cac so nguyen duong cua n la: %d", tong);*/





    // bai tap bo sung
   // cach 01
   
    int n, P = 1;

    do{     
            printf("\n enter the num n: ");
            scanf("%d",&n);
    }while(n<=1);

    for(int i=1; i<=(2*n); i++){
        if(i%2==0){
            printf(" %d ", i);
            P *= i;
        }
    }

    printf("\n tich cua P la: %d",P);
    
    return 0;
}