1. Introduction

A linked list is a linear data structure where elements (nodes) are stored in a sequence, and each node points to the next node using a reference or pointer. Unlike arrays, linked lists do not store data in contiguous memory locations.

2. Types of Linked Lists

Singly Linked List

Each node has two parts: data and a pointer to the next node.

Traversal is one-directional.

Doubly Linked List

Each node has three parts: data, a pointer to the next node, and a pointer to the previous node.

Allows traversal in both directions.

Circular Linked List

The last node points back to the first node, forming a loop.

Can be singly or doubly circular.

Circular Doubly Linked List

Similar to a doubly linked list but the last node points to the first, and the first points to the last.

3. Basic Structure of a Node

Singly Linked List Node (C++)

struct Node {
int data;
Node\* next;
};

Doubly Linked List Node (C++)

struct Node {
int data;
Node* next;
Node* prev;
};

4. Operations on Linked List

a. Insertion

At the beginning

Allocate memory for a new node.

Set the new node’s next pointer to the current head.

Update the head to point to the new node.

At the end

Traverse to the last node.

Set the last node’s next pointer to the new node.

Update the new node’s next to NULL.

At a specific position

Traverse to the position just before the target location.

Update pointers to insert the new node.

b. Deletion

At the beginning

Point the head to the second node.

Free the memory of the first node.

At the end

Traverse to the second last node.

Update its next pointer to NULL.

Free the last node.

At a specific position

Traverse to the node just before the target.

Update pointers to skip the target node.

Free the memory of the target node.

c. Traversal

Start from the head and move through the list using the next pointer until NULL is reached.

d. Search

Traverse the list and compare each node’s data with the target value.

e. Reversal

Singly Linked List

Use three pointers (previous, current, next) to reverse the direction of the next pointers.

Doubly Linked List

Swap the next and prev pointers for each node.

5. Advantages of Linked Lists

Dynamic Size: Can grow or shrink at runtime.

Efficient Insertions/Deletions: No need to shift elements as in arrays.

Memory Utilization: Allocates memory as needed.

6. Disadvantages of Linked Lists

Memory Overhead: Extra memory required for pointers.

Sequential Access: Slower access to elements compared to arrays.

Complex Implementation: More challenging than arrays.

7. Applications of Linked Lists

Dynamic memory allocation.

Implementation of stacks and queues.

Representation of graphs (adjacency lists).

Performing efficient insertions and deletions in lists.

Real-time applications like browser history, music playlists.

8. Time Complexity

Operation

Singly Linked List

Doubly Linked List

Insertion (Head)

O(1)

O(1)

Insertion (Tail)

O(n)

O(1) (if tail ptr)

Deletion (Head)

O(1)

O(1)

Deletion (Tail)

O(n)

O(1) (if tail ptr)

Traversal

O(n)

O(n)

Search

O(n)

O(n)

9. Code Examples

a. Singly Linked List Traversal (C++)

void traverse(Node* head) {
Node* temp = head;
while (temp != NULL) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL";
}

b. Reversing a Singly Linked List (C++)

Node* reverse(Node* head) {
Node *prev = NULL, *current = head, \*next = NULL;
while (current != NULL) {
next = current->next;
current->next = prev;
prev = current;
current = next;
}
return prev;
}

10. Interview Questions

How do you detect a cycle in a linked list?

Use Floyd’s Cycle Detection Algorithm (Slow and Fast pointers).

How do you merge two sorted linked lists?

Use a dummy node and compare elements to form the new sorted list.

Reverse a linked list in groups of size k.

Use recursion or an iterative approach to reverse k nodes at a time.

Find the middle of a linked list.

Use two pointers: slow and fast. Move the fast pointer two steps and the slow pointer one step.
