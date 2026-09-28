class ListNode:
    def __init__(self, value, next_node=None):
        self.value = value
        self.next = next_node

class LinkedList:
    
    def __init__(self):
        self.head = ListNode(-1)
        self.tail = self.head
    
    def get(self, index: int) -> int:
        i = 0
        cur = self.head.next
        while cur is not None:
            if i == index:
                return cur.value
            else:
                cur = cur.next
                i += 1
        return -1
        
    def insertHead(self, val: int) -> None:
        new_node = ListNode(val)
        new_node.next = self.head.next
        self.head.next = new_node
        if new_node.next is None:
            self.tail = new_node

    def insertTail(self, val: int) -> None:
        new_node = ListNode(val)
        self.tail.next = new_node
        self.tail = new_node

    def remove(self, index: int) -> bool:
        i = 0
        cur = self.head
        while i < index and cur is not None:
            i += 1
            cur = cur.next
        if cur is not None and cur.next is not None:
            if cur.next == self.tail:
                self.tail = cur
            cur.next = cur.next.next
            return True
        return False
        
    def getValues(self) -> List[int]:
        temp = []
        cur = self.head.next
        while cur != None:
            temp.append(cur.value)
            cur = cur.next
        return temp
