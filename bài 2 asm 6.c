//
//  main.c
//  bài 2 asm 6
//
//  Created by Mac Os on 9/25/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("nhap n = ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ; i < n ; i ++) {
        printf("nhap gia tri : ");
        scanf("%d",&arr[i]);
    }
    printf("mang sau khi nhap la : \n");
    for (int i = 0; i < n; i++) {
        printf("%5d",arr[i]);
        }
    int min = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 ) {
//            printf("cac so duong trong mang là: %d \n",arr[i]);
            min = arr[i];
            break;
        }
    }
    //        tìm min
    for (int i = 0; i < n; i++) {
        if (arr[i] < min && arr[i] > 0) {
            min = arr[i];
        }
    }
    printf("so duong nho nhat la : %d",min);
}

