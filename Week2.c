#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    int age;
    double height;
    double weight;
} personal_1;

int main(){
//    int arr1[] = {1,2,3,4,5,6,7};
//    int x = 0;
//    int y = 0;
//    int z = 0;
//    scanf("%d",&x);
//    scanf("%d",&y);
//    z = arr1[x];
//    arr1[x] = arr1[y];
//    arr1[y] = z;
//    printf("%d %d", arr1[x],arr1[y]);



    personal_1 person1;
    person1.age = 18;
    strcpy(person1.name,"lwb");
    person1.height = 184.5;
    person1.weight = 80.0;
    printf("My name is %s, age is %d, height is %.1lfcm, weight is %.1lfkg",person1.name,person1.age,person1.height,person1.weight);
    return 0;


}//
// Created by Wilbur Lee on 30/3/2024.
//
