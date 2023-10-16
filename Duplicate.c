struct Stack duplicate(struct Stack original) {
    struct Stack copy;
    copy.top = original.top;
    for (int i = 0; i <= original.top; i++) {
        copy.items[i] = original.items[i];
    }
    return copy;
}
