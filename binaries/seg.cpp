#include <stdio.h>
#include <stdlib.h>
void func2(){
    int *px = nullptr;
    *px = 7;
}
void func1(){
    func2();
}
int main(){
    printf("Hello, World !");
    func1();
    return 0;
}



