from typing import Optional

class Node:
  def __init__(self, val=None, prev=None, next=None) -> None:
    self.val = val
    self.prev = prev
    self.next = next

class LinkedList_d:
  def __init__(self, node: Optional[Node]) -> None:
    self.data = node
  
  def __str__(self) -> str:
    return f'Current node: {self.data.val}, prev: {self.data.prev}, next: {self.data.next}'
  
  def insert(self):
    # insert node at given index or at beginning of LL
    # CAUTION: you can separate the linked list and lose the link if you insert wrong
    # algo
    # 1. traverse LL to given idx
    # 2. assign the next node to temp
    # 3. assign node.next to new node.prev
    # 4. assign new node.next to temp
  
if __name__ == "__main__":
  # myLL = LinkedList_d(Node(1,None,Node(3,)))
  node1 = Node(1, None, None)
  node2 = Node(3, node1, None)
  node1 = Node(1, None, node2)
  node3 = Node(5, node2, None)
  node2 = Node(3, node1, node3)
  myLL = LinkedList_d(node1)
