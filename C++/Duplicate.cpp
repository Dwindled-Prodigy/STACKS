Stack duplicate() {
    Stack copy(size);
    copy.stack = stack; // Creates a shallow copy of the vector
    copy.top = top;
    return copy;
}
