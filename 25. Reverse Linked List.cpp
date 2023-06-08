#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev =NULL, *Next = NULL, *cur = head;
    while(cur != NULL){
        Next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = Next;
    }
    head = prev;
    return head;
}
