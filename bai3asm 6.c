//
//  main.c
//  mang
//
//  Created by Mac Os on 9/24/20.
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
        printf("%d \n",arr[i]);
        }
    int biendem = 1,luubiendem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 ) {
            if (arr[i+1] == arr[i] + 1) {
                biendem += 1;
            }else{
                if (biendem > luubiendem) {
                    luubiendem = biendem ;
                }
                biendem = 0;
            }
        }
    }
    printf("slg là : %d \n",luubiendem);
}
