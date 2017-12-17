#implementation of stack, one of the ADT
class Stack:

    #Constructor creates a list
    def __init__(self):
        self.stack = list()

    #Adding elements to stack
    def push(self,data):
        #Checking to avoid duplicate entries
        if data not in self.stack:
            self.stack.append(data)
            return True
        return False

    #Removing last element from the stack
    def pop(self):
        if len(self.stack)<=0:
            return ("Stack Empty!")
        return self.stack.pop()
        
    #Getting the size of the stack
    def size(self):
        return len(self.stack)

myStack = Stack()

print(myStack.pop()) #Stack Empty!
print(myStack.push(3)) #True
print(myStack.pop()) #3
print(myStack.pop()) #Stack Empty!
print(myStack.push(3)) #True
print(myStack.push(2)) #True
print(myStack.push(99)) #True
print(myStack.push(2)) #False, 2 already there




