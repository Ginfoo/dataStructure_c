//
// Created by infoo on 2018/9/1.
//

#ifndef DATASTRUCTURE_C_STACK_H
#define DATASTRUCTURE_C_STACK_H


//定义一个使用静态分配的stack 数据存放在栈区 由操作系统自己管理

#define MAXSIZE 100
typedef struct {
    int data[MAXSIZE];
    int top;
} SqStack;

/**
 * 初始化栈
 * @param stack
 * @return
 */
void InitStack(SqStack * stack);

/**
 * 判断栈是否为空
 * @param stack
 * @return
 */
int IsEmpty(SqStack stack);

/**
 * 入栈
 * @param stack
 * @param e
 * @return
 */
int Push(SqStack * stack, int e);

/**
 * 出栈  出栈元素放入 e
 * @param stack
 * @param e
 * @return
 */
int Pop(SqStack * stack, int * pInt);

/**
 * 读取栈顶元素
 * @param stack
 * @param pInt
 * @return
 */
int GetTop(SqStack stack, int * pInt);

/**
 * 清空栈
 * @param stack
 * @return
 */
int ClearStack(SqStack * stack);

#endif //DATASTRUCTURE_C_STACK_H
