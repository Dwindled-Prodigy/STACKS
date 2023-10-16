def duplicate(self):
    copy = Stack(self.size)
    copy.stack = self.stack[:]  # Creates a shallow copy of the list
    copy.top = self.top
    return copy
