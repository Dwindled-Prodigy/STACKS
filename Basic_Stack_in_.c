#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initializeStack(struct Stack *stack) {
    stack->top = -1;
}

int isFull(struct Stack stack, int size) {
    return stack.top == size - 1;
}

int isEmpty(struct Stack stack) {
    return stack.top == -1;
}

void push(struct Stack *stack, int item, int size) {
    if (isFull(*stack, size)) {
        printf("Stack is full. Cannot push.\n");
    } else {
        stack->items[++stack->top] = item;
        printf("%d pushed to the stack.\n", item);
    }
}

void pop(struct Stack *stack) {
    if (isEmpty(*stack)) {
        printf("Stack is empty. Cannot pop.\n");
    } else {
        printf("%d popped from the stack.\n", stack->items[stack->top--]);
    }
}

void display(struct Stack stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack.top; i++) {
            printf("%d ", stack.items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initializeStack(&stack);
    
    int size;
    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid stack size. Please choose a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    
    int choice;
    
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (stack.top == size - 1) {
                    printf("Stack is full. Cannot push.\n");
                } else {
                    int item;
                    printf("Enter the item to push: ");
                    scanf("%d", &item);
                    push(&stack, item, size);
                }
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
