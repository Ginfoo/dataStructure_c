#include <stdio.h>
#include "stack.h"

int main() {
    SqStack s;
    InitStack(&s);
    for (int i = 0; i < MAXSIZE; i++) {
        printf("%d ", s.data[i]);
    }
    return 0;
}