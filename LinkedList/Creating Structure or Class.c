Creating a Linked List
There are two information sets to store at every node, thus there is a need to create a self-defined data type to handle them. Therefore, we will use the help of structs and classes.

class Node{
    Public: // access modifier
    int data; // the data value
    Node* next; // the pointer to the next value
    Public:
    // constructor
    Node (int data1, Node* next1){
        data=data1;  // Initialize data with the provided value
        next=next1;  // Initialize next with the provided
    }
    Node (int data1){
        data=data1;  // Initialize data with the provided value
        next=nullptr;  // Initialize next as null since it's the end of the list

    }
};
int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}
Output:

0x11b7f90
2

Let's break this example to understand how it works:

The struct has two data types: data which contains the value of the node and a pointer next, which points to the next node in the list.
There is a constructor which assigns the values to a new node.
A new keyword is used to dynamically allocate memory to a node with data as arr[0].
The combination of the given parameters and functions initializes a linked list.    

Memory Space:
Let’s talk about assuming the data stored is integer. Another main difference between an array and a linked list is the memory used. In the case of an array, we are storing integers that consume 4 Bytes for every int, whereas in a linked list, we are storing data and a pointer at every node, so the memory used up will depend on the configuration of the system.

32 Bit System	    64 Bit System
Int - 4 Bytes	    Int - 4 Bytes
Pointer - 4 Bytes	Pointer - 8 Bytes
Overall - 8 Bytes	Overall - 12 Bytes
    
