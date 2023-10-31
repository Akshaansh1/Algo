#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void insertatTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    if (tail == NULL) {
        tail = temp;
    } else {
        tail->next = temp;
        tail = tail->next;
    }
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    while (n != 0) {
        int data;
        cin >> data;
        insertatTail(tail, data);

        if (head == NULL) {
            head = tail;
        }
        n--;
    }

    print(head);
    return 0;
}
