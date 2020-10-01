//
//  main.c
//  btap asm8
//
//  Created by Mac Os on 9/30/20.
//

#include <stdio.h>
#include <math.h>
int SNT(int n){
    int uoc = 0;
    for (int i = 2 ; i < n/2; i++) {
        if (n % i == 0) {
            uoc++;
            break;
        }
        if (uoc == 0) {
        }
    }
    return n;
}

int Tongson(int n){
    int sotachra;
    int S = 0;
    for (; n!= 0; ) {
        sotachra = n % 10;
        S += sotachra;
        n /= 10;
    }
    return S;
}
int Chuvitamgiac(int a,int b,int c){
    int S = 0;
    S = a + b +c;
    return S;
}
int Dientichtamgiac(int a,int b,int c){
    int p = (a + b + c)/2;
    int S = sqrt(p * (p -a) * (p - b) * (p - c));
    return S;
}



int main(int argc, const char * argv[]) {
    int n = 932;
    int tinhtong = Tongson(n);
    printf("tong la %d",tinhtong);
    int tinhcv = Chuvitamgiac(3,4,5);
    printf("chu vi là :%d",tinhcv);
    int dientich = Dientichtamgiac(5, 6, 7);
    printf("dien tich la : %d",dientich);
}
