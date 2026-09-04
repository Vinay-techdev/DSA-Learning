#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    Node* deleteTail(Node* head) {
        // If list is empty or has one node
        if (head == NULL || head->next == NULL) {
            delete head;
            return NULL;
        }

        // Traverse to the second last node
        Node* curr = head;
        while (curr->next->next != NULL) {
            curr = curr->next;
        }

        // Delete tail node
        delete curr->next;
        curr->next = NULL;

        return head;
    }
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Solution obj;
    head = obj.deleteTail(head);

    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}