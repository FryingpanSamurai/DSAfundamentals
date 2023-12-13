from typing import Optional

class Node:
  def __init__(self, val=None, next=None) -> None:
    self.val = val
    self.next = next

class LinkedList_s:
  """
    FUNCTION: This is a class for SINGLY Linked List.
    DEF:      Linked List features a 'linked' list of nodes that have a val and next attribute.
    INPUT:    node as <Node>, Node.val & Node.next attr
  """
  def __init__(self, node: Optional[Node]):
    self.data = node
  
  def __str__(self) -> str:
    return f'Current Head: {self.data.val}, Next: {self.data.next}'
  
  def insert(self, idx: Optional[int], node: Optional[Node]):
    # algo
    # 0. init vars
    # 1. traverse to idx
    # 2. assign node.next to temp
    # 3. assign node.next to new node
    # 4. assign temp to new node.next
    i = 0
    head = self.data

    while i != idx:
      head = head.next
      i += 1

    temp = head.next
    head.next = node
    node.next = temp

  def display(self):
    head = self.data

    while head:
      print(f'[{head.val}[next: {head.next}]] ->') if head.next else print(f'[{head.val}]')
      head = head.next

  def search(self, key) -> Optional[Node]:
    head = self.data

    while head:
      if head.val == key:
        return head
      else:
        head = head.next
  
  def delete(self, idx: int) -> Optional[Node]:
    head = self.data
    i = 0

    # idx - 1... stop before the target
    while i != idx-1:
      i += 1
      head = head.next
    deleted = head.next

    if deleted.next:
      head.next = deleted.next

    return deleted
    
    
      
  
if __name__ == "__main__":
  myLL = LinkedList_s(Node(1, Node(3, Node(5, Node(7, Node(9))))))
  myLL.delete(0)
  myLL.display()

