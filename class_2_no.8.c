#include <stdio.h>
int main()
{
    int a, b, c;
    a = 5;
    c = ++a;
    b = ++c, c++, ++a, a++;
    // 逗号表达式的优先级，最低，这里先算b=++c, b得到的是++c后的结果，b是7
    // b=++c 和后边的构成逗号表达式，依次从左向右计算的。(逗号表达式，取最后一个表达式的值)
    // 表达式结束时，c++和，++a,a++会给a+2，给c加1，此时c：8，a：8，b:7
    b += a++ + c;
    printf("a = %d b = %d c = %d\n:", a, b, c);
    return 0;
}//
// Created by Wilbur Lee on 31/3/2024.
//
