//
//  main.c
//  bài 2 asm2
//
//  Created by Mac Os on 9/13/20.
//

#include <stdio.h>

int main() {
    int a,b;
    printf ("a = ");
    scanf ("%d",&a);
    
    printf ("b = ");
    scanf ("%d",&b);
    
    if (a>=b){
        printf ("%d",a/b);
    }else{
        printf ("%d",a*b);
    }
    
}
