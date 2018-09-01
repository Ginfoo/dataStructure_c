//
// Created by infoo on 2018/9/1.
//

#ifndef DATASTRUCTURE_C_LINKEDLIST_H
#define DATASTRUCTURE_C_LINKEDLIST_H

#include <stdlib.h>

typedef struct LNode {
    int data;
    struct LNode * next;
} LNode, * pLinkedList;

/**
 * 初始化链表
 * @param list
 */
void InitLinkedList(pLinkedList list);

/**
 * 头插法建立链表
 * @param list
 */
void CreateListInHead(pLinkedList list);

/**
 * 查找第 i 个结点
 * @param list
 * @param i
 * @return
 */
LNode * GetNode(pLinkedList list, int i);

/**
 * 按值查找 结点
 * @param list
 * @param e
 * @return
 */
LNode * LocateNode(pLinkedList list, int e);

/**
 * 在位置 pos 上插入值为 e 的结点
 * @param list
 * @param pos
 * @param e
 * @return
 */
int InsertNode(pLinkedList list, int pos, int e);

/**
 * 删除
 * @param list
 * @param pos
 * @return
 */
int RemoveNode(pLinkedList list, int pos);

#endif //DATASTRUCTURE_C_LINKEDLIST_H
