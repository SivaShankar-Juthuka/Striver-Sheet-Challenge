/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
   Node *t=head, *r=head;
    if(head == NULL or head->next == NULL or head->next->next == NULL) return 0;
    
    while(true){
        // if(t == r) return 1            
        if(r == NULL or r->next == NULL) return 0;
        r = r->next;
        t = t->next;
        if(r == NULL or r->next == NULL) return 0;
        r = r->next;
        if(t == r) return 1;
    }
    return 1;   
}
