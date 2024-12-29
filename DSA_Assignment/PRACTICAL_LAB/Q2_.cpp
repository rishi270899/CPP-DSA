#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *insertAtPosition(struct Node *head, int data, int position)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    struct Node *current = head;
    int i;
    for (i = 1; i < position - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Position out of range.");
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;

    return head;
}
void traverseList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Enter data to insert: ");
    scanf("%d", &newData);
    printf("Enter position to insert at: ");
    scanf("%d", &position);
    head = insertAtPosition(head, newData, position);

    printf("Linked list: ");
    traverseList(head);

    return 0;
}
