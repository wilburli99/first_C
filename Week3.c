#include <stdio.h>
#define C 5


int main(int argc, char* argv[]){
    //pointer --> array
    int A[C], i, *p;
    for (i = 0; i < C ; i++) {
        A[i] = i*i;
    }
    printf("A = %p\n",A);
    p = A;
    printf("p = %p\n",p);
    for (p = A; p < A + C ; p++) {
        printf("p = %p, *p = %d\n", p, *p);
    }

    //pointer --> string
    char *q = "hello";
    int j = 0;
    while(*q){
        // while(*q) means that when *q != "\0"
        printf("address = %p, which is the string %s, %c\n",q,q,q[j]);
        q++;
    }
    return 0;
}//
// Created by Wilbur Lee on 30/3/2024.
//
