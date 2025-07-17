class MyLinkedList(object):

    def __init__(self):
        self.buf = []

    def get(self, index):
        """
        :type index: int
        :rtype: int
        """

        if index < 0 or index > len(self.buf) - 1: return -1
        else: return self.buf[index]
        

    def addAtHead(self, val):
        """
        :type val: int
        :rtype: None
        """

        self.buf.insert(0, val)
        

    def addAtTail(self, val):
        """
        :type val: int
        :rtype: None
        """

        self.buf.append(val)
        

    def addAtIndex(self, index, val):
        """
        :type index: int
        :type val: int
        :rtype: None
        """

        if index <= len(self.buf):
            self.buf.insert(index, val)
        

    def deleteAtIndex(self, index):
        """
        :type index: int
        :rtype: None
        """

        if index < len(self.buf): self.buf.pop(index)
        


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)