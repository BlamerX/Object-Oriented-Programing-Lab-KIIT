// (Class Template) Program to create a class called QUEUE with the member functions to add and to delete an element from the queue.Using these functions, implement a queue of integer and double.Demonstrate the operations by displaying the contents of the queue after every operation.

#include <iostream>
using namespace std;

#define SIZE 10

template <class X>
class queue
{
    X *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    queue(int size = SIZE);
    void dequeue();
    void enqueue(X x);
    X peek();
    int size();
    bool isEmpty();
    bool isFull();
};

template <class X>
queue<X>::queue(int size)
{
    arr = new X[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

template <class X>
void queue<X>::dequeue()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << arr[front] << endl;

    front = (front + 1) % capacity;
    count--;
}

template <class X>
void queue<X>::enqueue(X item)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << item << endl;

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

template <class X>
X queue<X>::peek()
{
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

template <class X>
int queue<X>::size()
{
    return count;
}

template <class X>
bool queue<X>::isEmpty()
{
    return (size() == 0);
}

template <class X>
bool queue<X>::isFull()
{
    return (size() == capacity);
}

int main()
{
    queue<int> q(4);

    q.enqueue(1);
    q.enqueue(23);
    q.enqueue(45);

    cout << "The front element is " << q.peek() << endl;
    q.dequeue();

    q.enqueue(56);

    cout << "The queue size is " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty())
        cout << "The queue is empty\n";
    else
        cout << "The queue is not empty\n";

    queue<double> p(4);

    p.enqueue(1.7);
    p.enqueue(2.3);
    p.enqueue(4.5);

    cout << "The front element is " << p.peek() << endl;
    p.dequeue();

    p.enqueue(5.6);

    cout << "The queue size is " << p.size() << endl;

    p.dequeue();
    p.dequeue();
    p.dequeue();

    if (p.isEmpty())
        cout << "The queue is empty\n";
    else
        cout << "The queue is not empty\n";
    return 0;
}