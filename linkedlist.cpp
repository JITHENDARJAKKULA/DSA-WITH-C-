#include<iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* next;
    
    // Constructor to initialize a node with given data and next pointer as NULL
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val); // Create a new node with the given value
    newNode->next = head; // Point the new node's next to the current head
    head = newNode; // Update the head to point to the new node
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val); // Create a new node with the given value
    if (head == NULL) {
        // If the list is empty, make the new node as the head
        head = newNode;
    } else {
        // Traverse the list to find the last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Update the last node's next to point to the new node
        temp->next = newNode;
    }
}

// Function to display the elements of the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test the implementation
int main() {
    Node* head = NULL; // Initialize an empty linked list
    insertAtEnd(head, 2); // Insert 2 at the end
    insertAtBeginning(head, 1); // Insert 1 at the beginning
    insertAtEnd(head, 3); // Insert 3 at the end
    display(head); // Display the elements of the linked list: 1 2 3
    return 0;
}
