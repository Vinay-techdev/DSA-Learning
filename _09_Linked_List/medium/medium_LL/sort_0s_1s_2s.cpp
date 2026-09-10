class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            ListNode* zeroDummy = new ListNode(-1);
            ListNode* oneDummy = new ListNode(-1);
            ListNode* twoDummy = new ListNode(-1);

            // Tail pointers to build each of the lists
            ListNode* zeroTail = zeroDummy;
            ListNode* oneTail = oneDummy;
            ListNode* twoTail = twoDummy;

            ListNode* temp = head;

            while(temp != nullptr){
                
                if(temp->data == 0) {
                    zeroTail->next = temp;
                    zeroTail = zeroTail->next;
                }
                else if(temp->data == 1) {
                    oneTail->next = temp;
                    oneTail = oneTail->next;
                }
                else {
                    twoTail->next = temp;
                    twoTail = twoTail->next;
                }

                temp = temp->next;
            }

            zeroTail->next = oneDummy->next ? oneDummy->next : twoDummy->next;
            oneTail->next = twoDummy->next;
            twoDummy->next = nullptr;

            head = zeroDummy->next;

            delete zeroDummy;
            delete oneDummy;
            delete twoDummy;

            return head;
        }
};