//
//  main.c
//  bài 2
//
//  Created by Mac Os on 9/23/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,S = 0;
    printf("nhap n = ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d",i);
            S += i;
        }
    }
    printf("tong cac uoc la :%d ",S);
}
