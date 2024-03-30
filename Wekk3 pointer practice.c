#include <stdio.h>
#include <stdlib.h> //为了使用malloc
void strcopy(char *des, char *src){
    while (*src){
        *des = *src;
        des++;
        src++;
    }
    *des = '\0';

}

int main(){
    char *str1 = "Hello";
    char *str2 = malloc(sizeof(char)*10);
    // malloc 可以分配动态内存
    strcopy(str2,str1);
    printf("str2 = %s",str2);

    return 0;
}//
// Created by Wilbur Lee on 30/3/2024.
//
