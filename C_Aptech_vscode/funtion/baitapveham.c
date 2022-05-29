#include<stdio.h>
#include<conio.h>
#include<math.h>


/*hàm nguyên mẫu prototype*/
float tinhChuVi( float r);
float tinhDienTich(float r);
int tinhGiaiThua( int x);
int tinhBinhPhuong( int y);
int tongSoNguyen(int z);

/*hàm main*/
int main(){
    float r;
    int n, m, k;

    do{
        printf("\nenter the r: ");
        scanf("%f", &r);

        printf("\nenter the n: ");
        scanf("%d", &n);

        printf("\nenter the m: ");
        scanf("%d", &m);

        printf("\nenter the k: ");
        scanf("%d", &k);
    }while(r<=0 && n<=0 && m<=0 && k<=0) ;

  printf("\n dien tich la: %.1f", tinhDienTich(r));
  printf("\n chu vi la: %.1f", tinhChuVi(r));

  // giai thừa
   tinhGiaiThua(n);

   // tính bình phương
   tinhBinhPhuong(m);

   // tính tổng các số nguyên
   printf("/n");
   tongSoNguyen(k);



  return 0;
}



/*hàm con xây dựng*/
float tinhChuVi(float r){
    const float PI = 3.14;
    float chuVi = 2*PI*r;
    return  chuVi;

}


float tinhDienTich(float r){
    const float PI = 3.14;
    float dienTich=PI*r*r;
    return dienTich;
}

int tinhGiaiThua( int x){
    int giaiThua = 1;
    for(int i=1; i<=x; i++){
        giaiThua *=i;
    }

    printf("\n %d! = %d", x, giaiThua);

    return 1;
}


int tinhBinhPhuong( int y){
    int bp = pow(y, 2);

    printf("\n %d^2 = %d", y, bp);

    return bp;
}


int tongSoNguyen(int z){
    int tong = 0;
    for(int i=0; i<=z; i++){
        tong += i;
        if(i==z){
            printf(" + %d = %d",i, tong);
        }else{
            printf(" %d + ", i);
        }
    } 
}