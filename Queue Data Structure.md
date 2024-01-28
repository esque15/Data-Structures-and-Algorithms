Queue Data Structure:

A queue is a fundamental data structure that represents a collection of elements with two principal operations: enqueue and dequeue. It follows the First In, First Out (FIFO) principle, meaning that the first element added to the queue is the first one to be removed. This makes queues useful for modeling scenarios such as waiting lines or processing elements in the order they arrive.

Key Operations:

Enqueue:

Adds an element to the end (rear) of the queue.
Also known as "insert" or "push" operation.
Dequeue:

Removes the element from the front (head) of the queue.
Also known as "delete" or "pop" operation.
Peek (or Front):

Returns the element at the front of the queue without removing it.
isEmpty:

Checks if the queue is empty.
isFull:

Checks if the queue is full (in the case of a fixed-size queue).
Implementation:

Queues can be implemented using various underlying data structures such as arrays or linked lists.

Array-based Queue:

Fixed-size or dynamic array to hold the elements.
Two pointers (front and rear) to track the position of the elements.
Linked List-based Queue:

Nodes linked together to form a queue.
The front and rear are represented by the head and tail of the linked list.
Applications:

Job Scheduling:

Processes are enqueued and dequeued for execution in a system.
Breadth-First Search (BFS) in Graphs:

Queues are used to traverse and explore nodes in a graph.
Print Queue:

Documents sent to a printer are processed in the order they are received.
Buffer in Networking:

Queues can be used to manage data packets in network routers.
Complexity:

The time complexity of enqueue and dequeue operations in a well-implemented queue is typically O(1).

The space complexity depends on the underlying implementation.

Types of Queues:

Linear Queue:

Elements are stored in a linear structure, and the front and rear move within this structure.
Circular Queue:

A variation of a linear queue where the front and rear are treated as circular indices.
Priority Queue:

Elements have priorities, and the dequeue operation removes the highest-priority element.
Double-ended Queue (Deque):

Supports insertion and deletion at both ends.
Queues are a fundamental concept in computer science and are used in various algorithms and applications. They provide an efficient way to manage and process elements in a specific order.





