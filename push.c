#include "stackSLL.h"
#include <stdio.h>
#include <stdlib.h>  // Include for malloc and exit functions

void push(Stack* stack) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Input First Name: ");
    scanf("%s", newNode->data.firstName);
    printf("Input Middle Name: ");
    scanf("%s", newNode->data.middleName);
    printf("Input Last Name: ");
    scanf("%s", newNode->data.lastName);
    printf("Input Mobile No.: ");
    scanf("%s", newNode->data.mobileNo);
    printf("Input Email Address: ");
    scanf("%s", newNode->data.emailAddress);

    // Add a newline character to improve the user interface
    printf("\n");

    newNode->next = stack->top;
    stack->top = newNode;
}
