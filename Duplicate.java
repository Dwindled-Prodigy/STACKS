public Stack duplicate() {
    Stack copy = new Stack(size);
    for (int i = 0; i <= top; i++) {
        copy.stack[i] = stack[i];
    }
    copy.top = top;
    return copy;
}
