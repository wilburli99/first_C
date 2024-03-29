#include <stdio.h>

//用递归解决1!+2!+3!+......+10!
int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
} //该函数求n的阶乘，n！

int main(){
    int m = 0;
    int sum = 0;
    scanf("%d",&m);
    for (int i = 1; i <= m ; i++) {
        sum = sum + factorial(i); //factorial里面不是m而是i，因为在for循环下进行求和
    }
    printf("%d",sum);
    return 0;
}//
// Created by Wilbur Lee on 21/3/2024.
//
