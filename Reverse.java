public void reverse() {
    int i = 0;
    int j = top;
    while (i < j) {
        int temp = stack[i];
        stack[i] = stack[j];
        stack[j] = temp;
        i++;
        j--;
    }
}
