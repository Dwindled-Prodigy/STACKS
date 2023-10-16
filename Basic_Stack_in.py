class Stack:
    def __init__(self, size):
        self.size = size
        self.stack = []
        
    def isFull(self):
        return len(self.stack) == self.size
    
    def isEmpty(self):
        return len(self.stack) == 0
    
    def push(self, item):
        if self.isFull():
            print("Stack is full. Cannot push.")
        else:
            self.stack.append(item)
            print(f"{item} pushed to the stack.")
    
    def pop(self):
        if self.isEmpty():
            print("Stack is empty. Cannot pop.")
        else:
            item = self.stack.pop()
            print(f"{item} popped from the stack.")
    
    def display(self):
        if self.isEmpty():
            print("Stack is empty.")
        else:
            print("Stack elements:", end=" ")
            for item in self.stack:
                print(item, end=" ")
            print()

size = int(input("Enter the size of the stack: "))
stack = Stack(size)

while True:
    print("\nStack Operations:")
    print("1. Push")
    print("2. Pop")
    print("3. Display")
    print("4. Quit")
    choice = int(input("Enter your choice: "))
    
    if choice == 1:
        item = int(input("Enter the item to push: "))
        stack.push(item)
    elif choice == 2:
        stack.pop()
    elif choice == 3:
        stack.display()
    elif choice == 4:
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please try again.")
