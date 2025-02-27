# Conversion of an infix expression in postfix expression
expression=('A+B*C')
list_of_operators=['+',"-","*",'/','%']
postfix=[]
stack=[]
class Stack:
    def __init__(self):
        self.items=[]
    def is_empty(self):
        if self.items[0] is None:
            return True
        else:
            return False
    def push(self,data=None):
        self.items.append(data)
    def pop(self):
        if len(self.items)!=0:
            last_removed_element=self.items.pop()
            return f'The element removed was {last_removed_element}'
        else:
            raise IndexError("The stack is empty")
    def peek(self):
        if len(self.items)!=0:
            return self.items[-1]
        else:
            raise IndexError("Stack is empty")
    def size(self):
        return len(self.items)
obj=Stack()
for each in expression:
    if each in list_of_operators:
        obj.push(each)
    else:
        postfix.append(each)
print("The postfix expression of given stack is ",end=" ")
for each in postfix:
    print(each,end="")
for each in obj.items[::-1]:
    print(each, end="")
   
