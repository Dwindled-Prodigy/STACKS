import java.util.Scanner;
import java.util.ArrayList;

class Stack {
    private int size;
    private ArrayList<Integer> stack;

    public Stack(int size) {
        this.size = size;
        stack = new ArrayList<>();
    }

    public boolean isFull() {
        return stack.size() == size;
    }

    public boolean isEmpty() {
        return stack.isEmpty();
    }

    public void push(int item) {
        if (isFull()) {
            System.out.println("Stack is full. Cannot push.");
        } else {
            stack.add(item);
            System.out.println(item + " pushed to the stack.");
        }
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop.");
        } else {
            int item = stack.remove(stack.size() - 1);
            System.out.println(item + " popped from the stack.");
        }
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
        } else {
            System.out.print("Stack elements: ");
            for (int item : stack) {
                System.out.print(item + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of the stack: ");
        int size = input.nextInt();
        Stack stack = new Stack(size);

        while (true) {
            System.out.println("\nStack Operations:");
            System.out.println("1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Display");
            System.out.println("4. Quit");
            System.out.print("Enter your choice: ");
            int choice = input.nextInt();

            if (choice == 1) {
                System.out.print("Enter the item to push: ");
                int item = input.nextInt();
                stack.push(item);
            } else if (choice == 2) {
                stack.pop();
            } else if (choice == 3) {
                stack.display();
            } else if (choice == 4) {
                System.out.println("Exiting the program.");
                break;
            } else {
                System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
