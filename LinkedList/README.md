Linked List :

Introduction



Imagine you are given a task where you have to maintain a data entry of cars entering a parking lot. Since the number of cars entering will be different and may change daily, constructing a fixed-sized data structure like an array might not be helpful. This is when linked lists come into the picture, which allows us to add and remove cars easily. Unlike arrays, linked lists have a variable size and can be modified to our needs.

What is a Linked List?
It is a linear data structure that can be visualized as a chain with different nodes connected, where each node represents a different element. The difference between arrays and linked lists is that, unlike arrays, the elements are not stored at a contiguous location.

![image](https://github.com/user-attachments/assets/4a8ca112-2bab-406f-99e8-0c309fe2c603)


Since for any element to be added in an array, we need the exact next memory location to be empty, and it is impossible to guarantee that it is possible. Hence adding elements to an array is not possible after the initial assignment of size.


A linked list is a data structure containing two crucial pieces of information, the first being the data and the other being the pointer to the next element. The ‘head’ is the first node, and the ‘tail’ is the last node in a linked list.

![image](https://github.com/user-attachments/assets/e410f92c-e72c-4cb7-abfc-93ec891f4a6f)

Types of Linked Lists:
1. Singly Linked Lists: In a singly linked list, each node points to the next node in the sequence. Traversal is straightforward but limited to moving in one direction, from the head to the tail.
   
![image](https://github.com/user-attachments/assets/a2c2d43b-d487-4b9a-bac3-0b5c9c3d2a25)

2. Doubly Linked Lists: In this each node points to both the next node and the previous node, thus allowing it for bidirectional connectivity.
![image](https://github.com/user-attachments/assets/4fcb69bb-25ac-4ce9-a3f8-d07224f62005)

3. Circular Linked Lists: In a circular linked list, the last node points back to the head node, forming a closed loop.
![image](https://github.com/user-attachments/assets/21fbf581-e174-43ed-ad03-82bf6b5071b7)




