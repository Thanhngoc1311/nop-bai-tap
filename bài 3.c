//
//  main.c
//  bài 2
//
//  Created by Mac Os on 9/23/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c = 0;
    printf("nhap a = ");
    scanf("%d",&a);
    printf("nhap b = ");
    scanf("%d",&b);
    if (a == 0 || b == 0){
        printf ("ucln la %d", a + b);
    } else {
        for (int i = 1; i <= a; i++) {
            if (a % i == 0 && b % i == 0) {
                c = i;
            }
        }
    }
   
    printf("tong cac uoc la :%d ",c);
}
