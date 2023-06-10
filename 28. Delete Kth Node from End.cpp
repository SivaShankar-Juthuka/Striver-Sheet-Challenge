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

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    int cnt = 0;
    Node *tmp = head;
    Node *prev = NULL;
    while(tmp){
        cnt += 1;
        tmp = tmp->next;
    }
    if(cnt == K) return head->next;
    cnt -= K;
    if(cnt == 0) return NULL;
    tmp = head;
    prev = tmp;
    while(cnt){
        cnt -= 1;
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = tmp->next;
    return head;
}
