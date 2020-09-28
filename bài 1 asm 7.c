//
//  main.c
//  bài asm 7
//
//  Created by Mac Os on 9/27/20.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int n;
    printf("nhap n = ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap gia tri : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
               for(int j=0;j<n-1-i;j++){
                   if(arr[j]>arr[j+1]){
                       int tmp = arr[j];
                       arr[j] = arr[j+1];
                       arr[j+1] = tmp;
                   }
               }
           }
    int x, max  ;
    printf("nhap x = ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++) {
        if (x > arr[i-1]) {
            max = arr[i-1];
        }
    }
    printf("so nho hon gan x la :%d ",max);
}
