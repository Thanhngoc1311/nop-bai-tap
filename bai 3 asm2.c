//
//  main.c
//  bài 3 asm2
//
//  Created by Mac Os on 9/14/20.
//

#include <stdio.h>

int main() {
    int thang,ngay,songaytrongthang,tongsongay,ngaytrongnam,sotuan,ngaybatdaucuatuanhientai,socuathu;
    printf ("nhap thang: ");
    scanf ("%d",&thang);
    printf ("nhap ngay: ");
    scanf ("%d",&ngay);
   
    if (thang < 12 && thang > 1){
        if (ngay <= 31 && ngay >= 1 ){
            if (thang<8){
                if (thang % 2 == 0){
                    if (thang == 2){
                        songaytrongthang = 28;
                    }else{
                        songaytrongthang = 30;
                    }
                    tongsongay = ( 30 * ( thang / 2 ) ) - 2;
                    tongsongay += ( 31 * ( thang / 2 ) );
                }else{
                    songaytrongthang = 31;
                    if(( 30 * ( thang / 2 ) ) - 2 != -1){
                        tongsongay = ( 30 * ( thang / 2 ) ) - 2;
                    }
                    
                    tongsongay += ( 31 * (( thang / 2) + 1 ) );
                }
            }else{
                if (thang % 2 == 0 ){
                    songaytrongthang = 31;
                    tongsongay = ( 31 * ( ( thang / 2 ) + 1 ) );
                    tongsongay += ( 30 * ( ( thang / 2 ) - 1 ) ) - 2;
                }else{
                    songaytrongthang = 30;
                    tongsongay = ( 31 * ( ( 11 / 2 ) + 1 ) );
                    tongsongay += ( 30 * ( 11 / 2 ) ) - 2;
                }
            }
            ngaytrongnam = tongsongay - songaytrongthang + ngay;
            sotuan = ngaytrongnam / 7;
            ngaybatdaucuatuanhientai = sotuan * 7;
            socuathu = ngaytrongnam - ngaybatdaucuatuanhientai;
            
            if (socuathu == 0){
                printf ("hom day la chu nhat");
            }else if (socuathu == 1){
                printf("hom day la thu hai");
            }else if (socuathu == 2){
                printf("hom day la thu ba");
            }else if (socuathu == 3){
                printf("hom day la thu tu");
            }else if (socuathu == 4){
                printf("hom day la thu nam");
            }else if (socuathu == 5){
                printf("hom day la thu sau");
            }else if (socuathu == 6){
                printf("hom day la thu bay");
            }
            printf ("ngay thu %d trong nam",ngaytrongnam);
        }else{
            printf ("ngay khong hop le");
        }
    }else{
        printf("thang khong hop le");
    }
}


