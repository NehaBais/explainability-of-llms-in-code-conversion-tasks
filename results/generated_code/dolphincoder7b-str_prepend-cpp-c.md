```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Define a structure to represent the node of a linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node with given value and return its reference
Node* newNode(int value) {
    // Allocate memory for the new node
    Node* temp = (Node*)malloc(sizeof(Node));
    
    // Assign the data and initialize the next pointer as null
    temp->data = value;
    temp->next = NULL;
    
    return temp;
}

// Function to insert a new node at the beginning of the linked list
void prepend(Node** head, int value) {
    Node* newNodePtr = newNode(value);
    
    // Make the next of the new node as the previous first node
    newNodePtr->next = *head;
    
    // Make this new node as the head
    *head = newNodePtr;
}

// Function to insert a new node at the end of the linked list
void append(Node** head, int value) {
    Node* newNodePtr = newNode(value);
    
    if (*head == NULL) {
        *head = newNodePtr;
        return;
    }
    
    // Traverse till the last node
    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    
    // Link the new node at the end of the linked list
    temp->next = newNodePtr;
}

// Function to print the elements of a given linked list
void printList(Node** head) {
    Node* temp = *head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    // Declare and initialize a linked list
    Node* head = NULL;
    
    // Perform necessary operations on the linked list using functions
    append(&head, 5);
    prepend(&head, 4);
    printList(&head);
    
    return 0;
}
```