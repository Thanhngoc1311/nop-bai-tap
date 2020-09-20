//
//  main.c
//  bài 5 asm 4
//
//  Created by Mac Os on 9/18/20.
//

#include <stdio.h>

int main() {
        int n,uoc=0;
        printf("Nhap n=");
        scanf("%d",&n);
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                uoc++;
                break;
            }
        }
        printf("uoc = %d\n",uoc);
        if(uoc==0){
            printf("day la so nguyen to");
        }else{
            printf("khong phai so nguyen to");
        }
}
