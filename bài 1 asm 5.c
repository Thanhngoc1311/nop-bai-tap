//
//  main.c
//  bài 1 asm 5
//
//  Created by Mac Os on 9/23/20.
//

#include <stdio.h>

int main() {
    int n ;
    printf("nhap n = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0){
            printf("so chan nho hon la : %d\n",i);
        }
    }
}
