public void peek() {
    if (isEmpty()) {
        System.out.println("Stack is empty. Cannot peek.");
    } else {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the position (1 for top) to peek: ");
        int position = input.nextInt();
        if (position < 1 || position > top + 1) {
            System.out.println("Invalid position. Stack size is " + (top + 1));
        } else {
            int item = stack[top - position + 1];
            System.out.println("Element at position " + position + " from the top: " + item);
        }
    }
}
