void reverse(struct Stack *stack) {
    int i, j;
    for (i = 0, j = stack->top; i < j; i++, j--) {
        int temp = stack->items[i];
        stack->items[i] = stack->items[j];
        stack->items[j] = temp;
    }
}
