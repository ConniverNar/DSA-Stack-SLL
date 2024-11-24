#include "stackSLL.h"
#include <stdio.h>

void start(Stack* stack) {
    stack->top = NULL;
}


int main() {
    Stack myStack;
    start(&myStack);

    char choice;
    do {
        printf("STACK ADT - SLL MENU:\n");
        printf("[1] Push\n");
        printf("[2] Pop\n");
        printf("[3] Show\n");
        printf("[4] Exit\n");
        printf("Choice? ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                push(&myStack);
                break;
            case '2':
                pop(&myStack);
                break;
            case '3':
                show(&myStack);
                break;
            case '4':
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != '4');

    return 0;
}
