#include <iostream>
using namespace std;

const int MaxSize = 100 ;

class Queue
{
private:
    int queue[MaxSize] ;
    int front ;
    int rear ;

public:

Queue()
{
        front = rear = -1;
}

// Check if the queue is empty
bool isEmpty() {
        return (front == -1 && rear == -1);
    }

// Check if the queue is full
bool isFull() {
        return rear == (maxSize - 1);
    }

// Add an element to the queue
void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue full! Cannot enqueue." << endl;
        } else if (isEmpty()) {
            front = rear = 0;
            queue[rear] = x;
        } else {
            rear++;
            queue[rear] = x;
        }
    }

// Remove an element from the queue
void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty! Dequeue not possible." << endl;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

// Get the front element of the queue
int FrontElement()
    {
        if (isEmpty()) {
            cout << "Error: Queue is empty! No front element." << endl;
            return -1;
        }
        return queue[front];
    }


    // Display the elements of the queue
void ShowQueue()

        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
}
};

int main()
 {
    queue q ;
    q.enqueue(1) ;
    q.enqueue(2) ;
    q.enqueue(3) ;
    q.enqueue(4) ;
    q.enqueue(5) ;
    q.enqueue(6) ;

    cout << "Front element: " << q.FrontElement() << endl ;

    q.dequeue() ;
    q.dequeue() ;
    cout << "Queue after dequeue : " ;
    q.ShowQueue() ;

   return 0 ;

 }

