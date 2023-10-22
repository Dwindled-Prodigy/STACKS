void peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty. Cannot peek." << std::endl;
    } else {
        int position;
        std::cout << "Enter the position (1 for top) to peek: ";
        std::cin >> position;
        if (position < 1 || position > stack.size()) {
            std::cout << "Invalid position. Stack size is " << stack.size() << std::endl;
        } else {
            int item = stack[stack.size() - position];
            std::cout << "Element at position " << position << " from the top: " << item << std::endl;
        }
    }
}
