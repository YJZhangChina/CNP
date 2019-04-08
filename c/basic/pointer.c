//
// Created by zhangyingjie on 19-4-8.
//
#include <stdio.h>

struct IntTuple {
    int x;
    int y;
};

void _pointer() {

}

void pointer_operation() {
    char chars[10];
    int *ptr = (int *) chars;
    printf("*ptr: %u\n", *ptr);
    printf("ptr: %d\n", ptr);
    ptr++;
    printf("ptr++: %d\n", ptr);
}

void pointer_operator() {

}

void pointer_expression() {

}

void pointer_array() {
    // The array object name "array" can be thought of as a pointer.
    int array[2] = {1, 2};
    printf("The second integer in the array: %d\n", array[1]);
}

void pointer_struct() {
    // Declare a IntTuple object with initial values 1 and 2.
    struct IntTuple tuple = {1, 2};
    // Declare a pointer to IntTuple. IntTuple * -> IntTuple
    struct IntTuple *ptr = &tuple;
    // Declare a pointer to tuple. ?
    int *ptrObj = (int *) &tuple;
    // "*ptr: 1"
    printf("*ptr: %u\n", *ptr);
    // "*ptrObj: 1"
    printf("*ptrObj: %u\n", *ptrObj);
}

void pointer_conversion() {

}