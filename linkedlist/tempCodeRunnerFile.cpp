#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};


void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

Node* splitIntegerToLinkedList(int number) {
    Node* linkedListHead = nullptr;

    if (number == 0) {
        insertNode(linkedListHead, 0);
    }

    while (number > 0) {
        int digit = number % 10;
        insertNode(linkedListHead, digit);
        number /= 10;
    }

    return linkedListHead;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}


int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    Node* linkedList = splitIntegerToLinkedList(abs(num));

    if (num < 0) {
        cout << "The linked list representation of the absolute value of the number:" << endl;
    } else {
        cout << "The linked list representation of the number:" << endl;
    }
    printLinkedList(linkedList);

    return 0;
}
