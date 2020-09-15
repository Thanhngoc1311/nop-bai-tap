//
//  main.c
//  code bài 3 asm1
//
//  Created by Mac Os on 9/13/20.
//

#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    printf ("nhap a =");
    scanf ("%d",&a);
    
    printf ("nhap b=");
    scanf ("%d",&b);
    
    printf ("nhap c=");
    scanf ("%d",&c);
    
    if (a >= b + c || b >= a + c || c >= a + b){
        printf ("day khong phai la hinh tam giac");
    }else{
        printf ("chuvi=%d",a+b+c);
        int p = (a+b+c)/2;
        int dientich = sqrt( p* (p - a)*(p - b)*(p - c) );
        printf ("dientich=%d",dientich);
    }
}
