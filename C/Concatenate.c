void concatenate(struct Stack *dest, struct Stack *src) {
    if (dest->top + src->top < MAX_SIZE - 1) {
        while (!isEmpty(src)) {
            int item = src->items[src->top--];
            push(dest, item);
        }
        printf("Stacks concatenated successfully.\n");
    } else {
        printf("Destination stack is not large enough to concatenate.\n");
    }
}
