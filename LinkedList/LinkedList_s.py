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
    
  # no args: remove element at beginning
  def delete(self, idx: Optional[int], key=None) -> Optional[Node]:
    prev = self.data
    head = self.data.next

    # switch for deletion handling#
    if not idx and not key:
      # remove first node
      deleted = prev
      return head
    # remove by key
    elif not key:
      while head:
        if head.val == key:
          return head
        else:
          head = head.next
    # remove by idx
    # algo
    # 1. traverse LL to idx
    # 2. once at idx, remove node from LL and return deleted node
    elif not idx:
      i = 0
      while i != idx and head:
        i += 1
        head = head.next
      
      if i == idx and head:
        deleted = head
      
    
    return deleted
      
  
if __name__ == "__main__":
  myLL = LinkedList_s(Node(1, Node(3, Node(5, Node(7, Node(9))))))
  print(myLL)
  myLL.delete(1)
  myLL.display()
