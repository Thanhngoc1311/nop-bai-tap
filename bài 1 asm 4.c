//
//  main.c
//  123
//
//  Created by Mac Os on 9/17/20.
//

#include <stdio.h>

int main() {
    int n,S=0;
    printf("nhap n =");
    scanf("%d",&n);
    for (int i=0; i<=n;i++) {
        S+=i;
    }
    printf("tong la %d",S);
}

