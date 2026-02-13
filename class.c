#include <stdio.h>
#include <stdlib.h>
#include <string.h>  


struct Node {
    int data;
    char name[50];  // max 49 characters + null terminator
    char ID[20];    // max 19 characters + null terminator
    struct Node* next;
};

int main() {
    // Create three nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    
    head->data = 1;
    strcpy(head->name, "Alice");
    strcpy(head->ID, "S101");
    head->next = second;  

    
    second->data = 2;
    strcpy(second->name, "Bob");
    strcpy(second->ID, "S102");
    second->next = third; 

   
    third->data = 3;
    strcpy(third->name, "Charlie");
    strcpy(third->ID, "S103");
    third->next = NULL;
   
    fourth->data = 4;
    strcpy(fourth->name, "jordan");
    strcpy(fourth->ID, "S104");
    fourth->next = NULL;   

    
    struct Node* temp = head;
    printf("Names in the Linked List:\n");
    while (temp != NULL) {
        printf("%s\n", temp->name);
        temp = temp->next;
    }

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Node structure
struct Node {
    int data;
    char name[50];
    char ID[20];
    struct Node* next;
};

/* Function to create a new node */
struct Node* createNode(int data, char name[], char id[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    strcpy(newNode->name, name);
    strcpy(newNode->ID, id);
    newNode->next = NULL;

    return newNode;
}

/* Function to add a node at the end of the list */
void addAtEnd(struct Node** head, int data, char name[], char id[]) {
    struct Node* newNode = createNode(data, name, id);

    // If list is empty
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

/* Function to print the linked list */
void printList(struct Node* head) {
    struct Node* temp = head;

    printf("Linked List:\n");
    while (temp != NULL) {
        printf("Data: %d, Name: %s, ID: %s\n",
               temp->data, temp->name, temp->ID);
        temp = temp->next;
    }
}

/* Main function */
int main() {
    struct Node* head = NULL;   // Empty list

    // Add nodes
    addAtEnd(&head, 1, "Alice", "S101");
    addAtEnd(&head, 2, "Bob", "S102");
    addAtEnd(&head, 3, "Charlie", "S103");
    addAtEnd(&head, 4, "David", "S104");

    // Print list
    printList(head);

    return 0;
}
