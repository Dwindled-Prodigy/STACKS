void concatenate(Stack &otherStack) {
    if (stack.size() + otherStack.size() <= size) {
        stack.insert(stack.end(), otherStack.stack.begin(), otherStack.stack.end());
        top += otherStack.top + 1;
        otherStack.top = -1; // Clear the other stack
        otherStack.stack.clear();
    } else {
        std::cout << "Destination stack is not large enough to concatenate." << std::endl;
    }
}
