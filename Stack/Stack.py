from typing import Optional

class Stack:
  """
    FUNCTION: This is a class for Stacks.
    DEF:      Elements 'pile-on' the stack like a stack of plates. LIFO (Last In First Out).
    INPUT:    element as <ambiguous>
    NOTES:    Pythonic lists 'simulate' stack [<- append to end, [-> pop from end
  """
  def __init__(self) -> None:
    self.data = []

  def __str__(self) -> str:
    return f'{self.data}'

  def push(self, datum):
    self.data.append(datum)
  
  def pop(self):
    return self.data.pop() if not self.isEmpty() else None
  
  def isEmpty(self):
    return len(self.data) == 0
  
  def isFull(self, max):
    # in python, lists are dynamically allocated so unless specifically denoted
    # you could push elements until memory runs out...
    return len(self.data) == max
  
  def peek(self):
    return self.data[-1] if not self.isEmpty() else None

if __name__ == "__main__":
  mystack = Stack()
  mynums = [1,2,3,4,5,6]
  for num in mynums:
    mystack.push(num)
  print("Top of the stack: \t" + str(mystack.peek()))
  print("Is the stack empty?: \t" + str(mystack.isEmpty()))
  print("Is the stack full?:  \t" + str(mystack.isFull(6)))
  mystack.pop()
  print("Popped: \t\t" + str(mystack.pop()))
  print("Is the stack full?:  \t" + str(mystack.isFull(6)))
  print('current stack: \t\t' + str(mystack))