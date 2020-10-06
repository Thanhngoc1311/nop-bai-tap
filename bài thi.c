//
//  main.c
//  baithi
//
//  Created by Mac Os on 10/6/20.
//

#include <stdio.h>
#include <math.h>
double chuvi(double a,double b,double c) {
    if (a > 0 && c > 0 && b > 0) {
        printf("du lieu hop le \n");
    }else{
        printf("du lieu khong hop le \n");
    }
    if (a + b > c && a + c > b && b + c >a) {
        printf("du lieu hop le \n");
    }
    double Cv = a + b + c;
    printf("chu vi tam giac: %lf ",Cv);
    return Cv;
}
double dientich(double a,double b, double c){
    if (a > 0 && c > 0 && b > 0) {
        printf("du lieu hop le \n");
    }else{
        printf("du lieu khong hop le \n");
    }
    if (a + b > c && a + c > b && b + c >a) {
        printf("du lieu hop le \n");
    }
    double p = chuvi(a, b, c)/2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("dien tich tam giac la: %lf",S);
    return S;
}



int main(int argc, const char * argv[]) {
    double a , b , c;
        printf("nhap a = ");
        scanf("%lf",&a);
        printf("nhap b = ");
        scanf("%lf",&b);
        printf("nhap c = ");
        scanf("%lf",&c);
    double tinhchuvi = chuvi(a, b, c);
    printf("%lf",tinhchuvi);
    double tinhdientich = dientich(a, b, c);
    printf("%lf",tinhdientich);

}
