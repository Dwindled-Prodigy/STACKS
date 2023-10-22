public int search(int target) {
    for (int i = top; i >= 0; i--) {
        if (stack[i] == target) {
            return top - i + 1; // Position from the top
        }
    }
    return -1; // Element not found
}
