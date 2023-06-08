/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int count(Node *head){
    int cnt = 0;
    Node *tmp = head;
    while(tmp){
        cnt += 1;
        tmp = tmp->next;
    }
    return cnt;
}
Node *findMiddle(Node *head) {
    // Write your code here
    // if(head == NULL) return -1;
    int cnt = count(head);
    int mid = cnt / 2;
    while(mid){
        mid -= 1;
        head = head->next;
    }
    return head;
}

