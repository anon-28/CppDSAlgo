#include<iostream>

using namespace std;

// Linked list node
class ListNode {

public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
    void setNext(ListNode* node) {
        this->next = node;
    }
    ListNode* getNext() {
        return this->next;
    }
};

/**
 * @brief Print the link list pointed by head pointer
 *
 * @param head pointer
 */
void display(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << endl;
}

/**
 * @brief reverse the linked list using recursion
 *
 * @param head pointer
 * @return ListNode* pointer to head
 */
ListNode* reverseList(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode* p = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return p;
}


int main(int argc, char const* argv[]) {
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);

    n1->setNext(n2);
    n2->setNext(n3);
    n3->setNext(n4);
    n4->setNext(n5);
    n5->setNext(NULL);

    display(n1);
    n1 = reverseList(n1);
    display(n1);

    return 0;
}
