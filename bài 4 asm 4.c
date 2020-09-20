//
//  main.c
//  bài 4 asm 4
//
//  Created by Mac Os on 9/18/20.
//

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,p,dientich,chuvi;
    do {
        printf ("nhap a= ");
        scanf("%f",&a);
        printf ("nhap b= ");
        scanf("%f",&b);
        printf ("nhap c= ");
        scanf("%f",&c);
    } while (!(a + b > c || b + c > a || a + c > b ));
    p = (a + b +c) / 2;
    dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("dien tich tam giac la : %f",dientich);
    chuvi = a + b + c;
    printf("chu vi tam giac la : %f",chuvi);
}

