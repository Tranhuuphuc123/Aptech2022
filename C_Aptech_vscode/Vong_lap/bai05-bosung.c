#include<stdio.h>
#include<math.h>
int main(){

    // tim so nguyen to va tinh tong
    /*
    int n, snt = 1;
    int tong = 0;

    do{
        printf("\n enter the num n: ");
        scanf("%d", &n);

    }while(n<2);

    
    for(int i = 2; i<=n; i++){
        snt = 1;
        for(int j = 2; j<=i;j++){
            if(i%j==0 && i!=j){
                snt = 0;
                printf(" \n cac so nhap vao khong phai la so nguyen to: %d ",i);
                break;
            }
        }
        if(snt == 1){
            printf("\n cac so nguyen to la: %d ", i);
            tong += i;
        }
         
    }
    printf("\n tong cac so nguyen to la: %d ", tong);*/





// bai 05 tinh tich cac so toi 2n cach 02
/*
 int n, P = 1;

    do{
            printf("\n enter the num n: ");
            scanf("%d",&n);
    }while(n<=1);

    printf(" tong cac so nguyen P: ");
    for(int i=1; i<=(2*n); i++){
        if(i%2==0){
            //printf(" %d ", i);
            P *= i;
            if(i==2*n) // xet dieu kien de gia tri cui cung 2*n se xuat hien dau "=" trong phép tinh
            // vi du nhap n =7, thi luc nay gia tri 14 =2*7 thoa dk thi 14 se co them dau = phia sau
                printf("%d = ",i);
            else
                printf("%d x ",i);// nguoc lai thi cac so con lai khong thoa dk xuat hien dau bang
                // no se them dau nhan "x" vao sau cac so con loai
                //----> muc dich la de hien cac cac so nhan voi nhau cho bai toan them dep mat, trinh bay ro rang
        }
    }
    printf("%d\n", P);*/








    // 04 bai tap bo sung nang cao

    // bai 01

    /* uoc so duoc hieu la 1 so tu nhien nao do mà so tu nhien khac chia het cho no. vidu: a la uoc so cua b neu b chia het cho a*/


    int n, j;
    int temp;

    do{
        printf("enter the num n: " );
        scanf("%d", &n);
    }while(n<1);

    printf("\n uoc so le cua %d la: ", n);
    for(j = n; j>=1; --j) {
        if(n%j==0 && j%2!=0)break;
    } 
    printf(" %d ", j); 
    for(temp = j = 1; j<=n; j *= 2){
        if(n%j==0){
            temp = j;
        }
    }
    printf("\n gia tri uoc cua cua luy thua 2: %d", temp);
    return 0;
}