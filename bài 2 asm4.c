//
//  main.c
//  bài 2
//
//  Created by Mac Os on 9/17/20.
//

#include <stdio.h>

int main() {
    int n;
    float S = 1.0;
    printf("nhap n =");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        S += 1.0/i+1;
    }
    printf("tong la %f",S);
}
