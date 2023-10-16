def search(self, target):
    for i, item in enumerate(reversed(self.stack), 1):
        if item == target:
            return i  # Position from the top
    return -1  # Element not found
