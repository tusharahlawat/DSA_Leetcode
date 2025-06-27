class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = prev = ListNode(0)

        p1, p2 = list1, list2
        while p1 and p2:
            if p1.val < p2.val:
                prev.next = p1
                p1 = p1.next
            else:
                prev.next = p2
                p2 = p2.next
            prev = prev.next

        if p1:
            prev.next = p1
        else:
            prev.next = p2

        return dummy.next