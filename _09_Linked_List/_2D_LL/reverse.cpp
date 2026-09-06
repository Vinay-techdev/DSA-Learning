#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;  
    Node* next;    
    Node* back; 

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);

    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {

        Node* temp = new Node(arr[i], nullptr, prev);

        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* reverseDLL(Node* head) {
    // If list is empty or has one node, nothing to reverse
    if (head == nullptr || head->next == nullptr) return head;

    // Pointer to track the current node
    Node* curr = head;

    while (curr != nullptr) {
        // Swap next and back pointers of current node
        Node* temp = curr->next;
        curr->next = curr->back;
        curr->back = temp;

        // Move to the next node in original order
        head = curr;          
        curr = temp;          
    }

    return head;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};

    Node* head = convertArr2DLL(arr);

    head = reverseDLL(head);

    print(head);

    return 0;
}
