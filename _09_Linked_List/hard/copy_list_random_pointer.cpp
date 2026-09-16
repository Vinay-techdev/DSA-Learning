
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    void insertNodeBetween(Node* head) {

        Node* temp = head;
        while (temp != nullptr) {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;

            temp = temp->next->next;
        }
    }

public:
    void connectRandom(Node* head) {

        Node* temp = head;

        while (temp != nullptr) {
            Node* copy = temp->next;

            if (temp->random) copy->random = temp->random->next;
            else copy->random = nullptr;

            temp = temp->next->next;
        }
    }

public:
    Node* cloneListNode(Node* head) {
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* point = dummy;

        while (temp != nullptr) {
            point->next = temp->next;
            temp->next = temp->next->next;

            point = point->next;
            temp = temp->next;
        }

        return dummy->next;
    }

public:
    Node* copyRandomList(Node* head) {
        insertNodeBetween(head);
        connectRandom(head);

        return cloneListNode(head);
    }
};