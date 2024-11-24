#include "stackSLL.h"
#include <stdio.h>

void pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack underflow\n");
        return;
    }

    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
}
