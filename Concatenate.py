def concatenate(self, other_stack):
    if len(self.stack) + len(other_stack.stack) <= self.size:
        self.stack.extend(other_stack.stack)
        self.top = len(self.stack) - 1
        other_stack.clear()
    else:
        print("Destination stack is not large enough to concatenate.")
