class MyLinkedList {
public:

    struct Node {
        int val;
        Node* next;

        Node(int x) {
            val = x;
            next = NULL;
        }
    };

    Node* head;
    int cnt;

    MyLinkedList() {
        head = NULL;
        cnt = 0;
    }

    int get(int index) {
        if (index < 0 || index >= cnt)
            return -1;

        Node* temp = head;

        for (int i = 0; i < index; i++)
            temp = temp->next;

        return temp->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;

        cnt++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            cnt++;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;

        cnt++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > cnt)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == cnt) {
            addAtTail(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        cnt++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= cnt)
            return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;

            cnt--;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
        cnt--;
    }
};