#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to traverse the linked list
void traverseLinkedList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

int main() {
    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    // Traverse and print the linked list
    std::cout << "Linked List: ";
    traverseLinkedList(head);

    // Clean up the linked list
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
