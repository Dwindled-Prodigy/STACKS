int search(struct Stack *stack, int target) {
    for (int i = stack->top; i >= 0; i--) {
        if (stack->items[i] == target) {
            return stack->top - i + 1; // Position from the top
        }
    }
    return -1; // Element not found
}
