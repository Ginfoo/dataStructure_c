//
// Created by infoo on 2018/9/1.
//
#include "stack.h"
#include <string.h> //标准的c 头文件

void InitStack(SqStack * stack) {
    memset(stack->data, 0x00, sizeof(int) * MAXSIZE);
    stack->top = -1;
}

int IsEmpty(SqStack stack) {
    if (stack.top == -1) return 1;
    return 0;
}

int Push(SqStack * stack, int e) {
    if (stack->top >= MAXSIZE - 1) return 0;
    stack->data[++stack->top] = e;
    return 1;
}

int Pop(SqStack * stack, int * pInt) {
    if (IsEmpty(*stack)) return 0;
    *pInt = stack->data[stack->top--];
    return 1;
}

int GetTop(SqStack stack, int * pInt) {
    if (IsEmpty(stack)) return 0;
    *pInt = stack.data[stack.top];
    return 1;
}

int ClearStack(SqStack * stack) {
    stack->top = -1;
}