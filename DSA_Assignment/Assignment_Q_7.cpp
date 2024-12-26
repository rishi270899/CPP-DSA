#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to traverse and print the linked list
void traverseLinkedList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Traverse and print the linked list
    traverseLinkedList(head);

    // Clean up the memory
    delete head;
    delete second;
    delete third;

    return 0;
}
