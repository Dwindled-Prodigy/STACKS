void peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot peek.\n");
    } else {
        int position;
        printf("Enter the position (1 for top) to peek: ");
        scanf("%d", &position);
        if (position < 1 || position > stack->top + 1) {
            printf("Invalid position. Stack size is %d\n", stack->top + 1);
        } else {
            int item = stack->items[stack->top - position + 1];
            printf("Element at position %d from the top: %d\n", position, item);
        }
    }
}
