class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int v) : val(v), next(nullptr) {}
    };
    
    Node* head;
    int size;
    
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) {
            return -1; // Index is invalid
        }
        
        Node* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) {
            return; // Index is greater than length, do nothing
        }
        if (index <= 0) {
            addAtHead(val);
        } else if (index == size) {
            addAtTail(val);
        } else {
            Node* newNode = new Node(val);
            Node* curr = head;
            for (int i = 0; i < index - 1; ++i) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return; // Index is invalid
        }
        Node* curr = head;
        if (index == 0) {
            head = head->next;
        } else {
            for (int i = 0; i < index - 1; ++i) {
                curr = curr->next;
            }
            curr->next = curr->next->next;
        }
        size--;
    }
};
