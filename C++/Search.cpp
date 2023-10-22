int search(int target) {
    for (int i = stack.size() - 1; i >= 0; i--) {
        if (stack[i] == target) {
            return stack.size() - i; // Position from the top
        }
    }
    return -1; // Element not found
}
