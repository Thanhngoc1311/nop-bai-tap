//
//  main.c
//  bài4
//
//  Created by Mac Os on 9/23/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, uoc = 0;
    printf("nhap n =");
    scanf("%d",&n);
    for (int i = 2 ; i < n ; i++) {
        if (n < 2){
            printf("khong co so nguyen to nho hon");
        }else{
            for(int j=2;j < i;j++){
            if(i%j==0){
                uoc++;
                break;
            }
        }
        if(uoc==2){
            printf("so nguyen to nho hon la %d \n",i);
        }else{
        }
    }
}
}
