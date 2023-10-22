def peek(self):
    if self.isEmpty():
        print("Stack is empty. Cannot peek.")
    else:
        position = int(input("Enter the position (1 for top) to peek: "))
        if position < 1 or position > len(self.stack):
            print("Invalid position. Stack size is", len(self.stack))
        else:
            item = self.stack[-position]
            print(f"Element at position {position} from the top: {item}")
