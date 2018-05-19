# Remove-Nth-Node-From-End-of-List

链表题目。将倒数第n个数字删除，然后返回整个链表。

思路：head是指向链表的头指针。则有定义：ListNode*t2=head;ListNode**t1=&head;(t1指head的指针，即指向指针的指针)
     先让t2指向第n个，t1指向head(则t2走到链表尾部即t1走到第n个)
     最后t1跳过当前指向的这个节点（第n个），将后面的赋给*t1（指向节点的指针）
