//
// Created by infoo on 2018/9/1.
//
#include "stack.h"
#include <string.h> //标准的c 头文件

int InitStack(SqStack * stack) {
    memset(stack->data, 0x00, sizeof(int) * MAXSIZE);
    stack->top = -1;
}
