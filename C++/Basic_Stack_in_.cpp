#include <iostream>
#include <vector>

class Stack {
private:
    int size;
    std::vector<int> stack;

public:
    Stack(int size) : size(size) { }

    bool isFull() {
        return stack.size() == static_cast<size_t>(size);
    }

    bool isEmpty() {
        return stack.empty();
    }

    void push(int item) {
        if (isFull()) {
            std::cout << "Stack is full. Cannot push." << std::endl;
        } else {
            stack.push_back(item);
            std::cout << item << " pushed to the stack." << std::endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        } else {
            int item = stack.back();
            stack.pop_back();
            std::cout << item << " popped from the stack." << std::endl;
        }
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Stack elements: ";
            for (int item : stack) {
                std::cout << item << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the stack: ";
    std::cin >> size;
    Stack stack(size);

    while (true) {
        std::cout << "\nStack Operations:" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Display" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            int item;
            std::cout << "Enter the item to push: ";
            std::cin >> item;
            stack.push(item);
        } else if (choice == 2) {
            stack.pop();
        } else if (choice == 3) {
            stack.display();
        } else if (choice == 4) {
            std::cout << "Exiting the program." << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
