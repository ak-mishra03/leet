/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if (head == null) return null;

        ListNode temp = head;
        int size = 0;
        while (temp != null) {
            temp = temp.next;
            size++;
        }

        if (n == size) {
            return head.next;
        }

        int removeIndex = size - n;
        ListNode temp2 = head;

        for (int i = 1; i < removeIndex; i++) { 
            temp2 = temp2.next;
        }

        if (temp2.next != null) {
            temp2.next = temp2.next.next;
        }

        return head;
    }
}

