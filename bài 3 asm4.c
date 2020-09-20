//
//  main.c
//  bài 3
//
//  Created by Mac Os on 9/18/20.
//

#include <stdio.h>

int main() {
    int S = 0;
    for (int i = 0; i <= 199; i ++) {
    if (i % 2 != 0) {
        S += i;
    }
        printf("tong la %d",S);
    }
}
