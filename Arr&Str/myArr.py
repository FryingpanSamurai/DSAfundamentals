from typing import Optional

class myArr:
    """
    FUNCTION:   This is a class for arrays.
    DEF:        Element: single item stored in an array
                Index:   location of an element in an array, from 0 to n-1 where n is elements in array
    INPUT:      data as <list/array>
    OUTPUT:     print the entire array
    """
    def __init__(self, data: Optional[list]) -> None:
        self.data = data

    def __str__(self) -> str:
        return f'{self.data}'
    
    def size(self) -> int:
        return len(self.data)

    # sequential traversal of array from front to back
    def traverseFwd(self):
        maxidx = len(self.data) - 1
        for i in range(maxidx):
            print(self.data[i])

    # sequential traversal in reverse
    def traverseRev(self):
        for i in range(-1, -1, -1):
            print(self.data[i])

    # insert element el at idx
    # no strict typing for the inserted element el
    def insert(self, el, idx: Optional[int]):
        self.data.insert(idx, el)

    # delete element at idx or last element if idx is null
    def delete(self, idx: Optional[int]):
        self.data.pop(idx)

    # searches an element using the given idx or by the value using sequential search
    def seqSearch(self, idx: Optional[int], val=None):
        maxidx = len(self.data) - 1
        for i in range(maxidx):
            if idx == i:
                print(f'{self.data[i]} found @ {idx}')
            elif self.data[i] == val:
                print(f'{val} found in data @ {idx}')
                