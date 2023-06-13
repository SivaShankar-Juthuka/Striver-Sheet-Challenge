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
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int> *tmp = head;
    vector<int>res;
    while(tmp){
        res.emplace_back(tmp->data);
        tmp = tmp->next;
    }
    int i = 0, j = res.size()-1;
    while(i <= j){
        if(res[i] != res[j]){
            return false;
        }
        i+= 1;
        j-= 1;
    }
    return true;
}
