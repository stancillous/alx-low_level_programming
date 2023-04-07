###C - Singly Linked Lists
<h5>A singly linked list is a data structure in C that consists of a sequence of nodes, where each node contains a data value and a pointer to the next node in the list</h5>
Unlike arrays, elements are not stored in a continous block of memory.
Some important things to know about sll:
1. Declaring a node: use structs
```
struct Node {
    int data;
    struct Node* next;
};
```
2. Creating a linked list: You need a head pointer - to point to the first node in our list

```struct Node* head = NULL;```

3. Inserting elements (beginning, end, or given position in the list)
4. Deleting nodes (beginning, end or specific position)
5.Traversing the list

```
struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);

```
Q. Difference btwn arrays and linked lists (adv and disadv. of each)
