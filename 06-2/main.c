//
//  main.c
//  06-2
//
//  Created by MacBook Air on 2023/10/12.
//

#include <stdio.h>

void func1(void){
    int x;
    printf("func1 x is at %p\n", &x);
}

int main(void){
    int x;
    printf("main x is at %p\n", &x);
    func1();
    
    return 0;
}
