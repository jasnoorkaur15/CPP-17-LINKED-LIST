# Experiment-17: Linked List

## Aim

To study and implement the concept of linked lists in C++ by performing the following operations:

> Creating multiple nodes and linking them together.

> Initializing and printing the contents of a single node.

> Inserting nodes at the head of a linked list and displaying the result.

## Objectives

To understand the structure and functioning of a Node in a linked list.

To study the use of dynamic memory allocation in data structures.

To compare arrays and linked lists in terms of memory management and efficiency.

To implement basic operations on a linked list such as creation, traversal, and insertion.

## Theory
### Introduction to Linked Lists

A linked list is a linear data structure consisting of nodes. Each node contains two fields:

Data field – stores the actual data value.

Pointer field – stores the address of the next node.

The first node is called the head, and the last node points to NULL.

Unlike arrays, linked lists:

Use dynamic memory allocation.

Do not require contiguous memory locations.

Support efficient insertion and deletion operations.

### Types of Linked Lists

Singly Linked List: Each node points to the next node.

Doubly Linked List: Each node points to both next and previous nodes.

Circular Linked List: The last node links back to the first node.

The programs in this experiment demonstrate a singly linked list.

### Key Concepts Applied

Classes and Objects – To define node structures.

Constructors – For initializing node values at the time of creation.

Pointers – To establish connections between nodes.

Dynamic Memory Allocation (new) – To allocate memory for nodes during execution.

Traversal – Iterating through nodes until the end (NULL) is reached.

Insertion at Head – Adding a new node at the beginning of the list.

### Arrays vs Linked Lists
| Feature            | Arrays (Static)            | Linked Lists (Dynamic)         |
| ------------------ | -------------------------- | ------------------------------ |
| Memory Allocation  | Fixed and contiguous       | Dynamic and non-contiguous     |
| Insertion/Deletion | Time-consuming (shifting)  | Efficient (pointer adjustment) |
| Access Time        | O(1) – direct index access | O(n) – sequential traversal    |
| Memory Utilization | May waste unused memory    | Grows and shrinks as needed    |

### Comparisions of Pograms
| Aspect            | Program 1                   | Program 2                   | Program 3                          |
| ----------------- | --------------------------- | --------------------------- | ---------------------------------- |
| Purpose           | Demonstrates manual linking | Demonstrates initialization | Demonstrates insertion operation   |
| Number of Nodes   | 3 nodes                     | 1 node                      | Multiple (dynamic)                 |
| Traversal         | Yes                         | No                          | Yes                                |
| Reusability       | Low                         | Low                         | High (functions used)              |
| Practical Utility | Basic demonstration         | Syntax verification         | Realistic linked list manipulation |

### Program Descriptions
#### Program 1: Creating and Linking Three Nodes

Three nodes with values are created.

They are linked together to form a chain.

The list is traversed and all values are displayed sequentially.

Demonstrates the basic idea of linking nodes manually.

#### Program 2: Single Node Initialization

A single node is created and initialized with a value.

The node’s value and its pointer (which points to NULL) are displayed.

Demonstrates the basic syntax of linked list creation and initialization.

#### Program 3: Insertion at Head

An empty list is initialized.

New nodes are inserted at the head one by one.

After each insertion, the linked list is displayed.

Demonstrates a practical operation in linked lists that allows dynamic growth.

## Algorithms
### Algorithm for Program 1 (Creating & Printing 3 Nodes)

Define a node structure with a data field and pointer field.

Create three nodes dynamically.

Link the nodes sequentially.

Start from the head node.

Traverse until the pointer becomes NULL, printing each value.

### Algorithm for Program 2 (Single Node Initialization)

Define a node structure with a constructor.

Create a single node dynamically with a value.

Print the data and pointer of the node.

### Algorithm for Program 3 (Insertion at Head)

Define a node structure with a constructor.

Create an insertion function:

Allocate memory for a new node.

Point the new node to the current head.

Update head to the new node.

Create a display function:

Start from head and traverse through the list.

## Concepts Used
### Object-Oriented Programming (OOP)

Classes: Used to define a node (Node / Link) with attributes (data and pointer).

Objects: Each dynamically created node is an object of the class.

Constructors: Automatically initialize data values when a node is created.

### Dynamic Memory Allocation

The keyword new allocates memory at runtime for nodes.

Provides flexibility, unlike arrays which are fixed-size.

Essential for building scalable data structures.

### Pointers and Address Linking

Each node contains a pointer (next) that stores the address of the next node.

Pointer manipulation connects nodes together, forming the chain.

NULL (or 0) is used to mark the end of the list.

### Linked List Data Structure

Node Creation: Initializing data and setting next.

Traversal: Iterating through the list until the end.

Insertion at Head: Adding new nodes dynamically at the start of the list.

### Control Structures

Loops: while loops are used for traversal until NULL is reached.

Condition Checks: Ensures termination when there are no more nodes.

### Modularity

Functions like insert_head() and disp() are written separately in Program 3.

Improves reusability, readability, and maintainability of code.

## Conclusion

Program 1 provided understanding of creating multiple nodes and linking them together manually.

Program 2 clarified the basic syntax of node creation and initialization.

Program 3 demonstrated insertion at the head, a fundamental linked list operation.

These programs together form the foundation for further data structure applications, such as insertion at tail, deletion, and searching.

Linked lists are highly flexible compared to arrays, making them essential in dynamic applications like memory management, file handling, and implementing queues/stacks.
Print each node until NULL is reached.

Insert nodes one by one at the head and display after each operation.
