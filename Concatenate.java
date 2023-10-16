public void concatenate(Stack otherStack) {
    if (top + otherStack.top < size - 1) {
        for (int i = 0; i <= otherStack.top; i++) {
            stack[top + i + 1] = otherStack.stack[i];
        }
        top += otherStack.top + 1;
        otherStack.top = -1; // Clear the other stack
        otherStack.clear();
    } else {
        System.out.println("Destination stack is not large enough to concatenate.");
    }
}
