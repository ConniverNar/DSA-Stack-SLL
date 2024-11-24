#include "stackSLL.h"
#include <stdio.h>

void show(Stack* stack) {
    Node* current = stack->top;
    printf("LN\t\tFN\t\tMN\t\tPN\t\tEA\n");
    printf("==================================================================\n");
    while (current != NULL) {
        printf("%s\t\t%s\t\t%s\t\t%s\t%s\n",
               current->data.lastName,
               current->data.firstName,
               current->data.middleName,
               current->data.mobileNo,
               current->data.emailAddress);
        current = current->next;
    }
    printf("==================================================================\n");
    printf("Press any key to return to MAIN MENU.\n");
    getchar();  // To capture the newline character
    getchar();  // Wait for user input
}
