from typing import Optional

class Queue:
  """
  FUNCTION:   This is a class for Queue.
  DEF:        Like a line for movie tickets, "first come, first serve".
              Elements come into the Queue on one end, then exit from the other end.
              Think of it like a one-way tube.
  INPUT:      element as <ambiguous>
  NOTES:      Used python list as data structure in ->[]-> out
  """
  def __init__(self) -> None:
    self.data = []
  
  def __str__(self):
    return f'Current Queue: {self.data}'
  
  def isEmpty(self):
    return len(self.data) == 0
  
  def isFull(self, max):
    return len(self.data) == max
  
  # push element onto the front of the queue
  def push(self, datum):
    self.data.insert(0, datum)
  
  # remove the last element from the queue
  def pop(self):
    return self.data.pop()
  
  def peekFront(self):
    return self.data[0] if not self.isEmpty() else None
  
  def peekRear(self):
    return self.data[-1] if not self.isEmpty() else None
  
if __name__ == "__main__":
  my_q = Queue()
  nums = [1,3,5,7,9]
  for num in nums:
    my_q.push(num)
  print(my_q)
  print(f'{my_q.peekFront()} at front of q')
  print(f'{my_q.peekRear()} at rear of q')
  print(f'{my_q.pop()} popped from rear')
  print(f'{my_q.peekFront()} at front of q')
  print(f'{my_q.peekRear()} at rear of q')
