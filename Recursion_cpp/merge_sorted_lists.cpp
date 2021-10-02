#include<iostream>

using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node(int n) {
        this->data = n;
    }
};


/**
 * @brief Merge two sorted lists into onr list
 *
 * @param A head pointer of first list
 * @param B head pointer of second list
 * @return Node* pointer of merged list
 */
Node* sortedMerge(Node* A, Node* B) {
    if (A == NULL) return B;
    if (B == NULL) return A;
    if (A->data <= B->data) {
        A->next = sortedMerge(A->next, B);
        return A;
    } else {
        B->next = sortedMerge(A, B->next);
        return B;
    }
}


/**
 * @brief Print the link list pointed by head pointer
 *
 * @param head pointer
 */
void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << endl;
}


int main(int argc, char const* argv[]) {
    Node* n1 = new Node(1);
    Node* n2 = new Node(5);
    Node* n3 = new Node(13);
    Node* n4 = new Node(14);
    Node* n5 = new Node(550);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    Node* n1_1 = new Node(2);
    Node* n2_2 = new Node(15);
    Node* n3_3 = new Node(130);
    Node* n4_4 = new Node(200);
    Node* n5_5 = new Node(350);

    n1_1->next = n2_2;
    n2_2->next = n3_3;
    n3_3->next = n4_4;
    n4_4->next = n5_5;
    n5_5->next = NULL;

    display(n1);
    display(n1_1);
    display(sortedMerge(n1, n1_1));

    return 0;
}
