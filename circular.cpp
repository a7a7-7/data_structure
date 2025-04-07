#include<iostream>
#define MAX_SIZE 10

using namespace std;

class circular_queue {
    private:
        int queue[MAX_SIZE];
        int frontt = -1;
        int rear = -1 ;
    public:
        bool empty() {
            return frontt == rear;
        }

        bool full() {
            return frontt == (rear + 1) % MAX_SIZE;
        }

        void enqueue(int num) {
            rear = (rear + 1) % MAX_SIZE;
            queue[rear] = num;
        }

        int front() {
            return queue[(frontt + 1) % MAX_SIZE]; 
        }

        int dequeue() {
            frontt = (frontt + 1) % MAX_SIZE;
            return  queue[frontt];
        }

        int size() {
            return (rear - frontt + MAX_SIZE) % MAX_SIZE;
        }
};

int main() {
    circular_queue cq;
    cq.enqueue(1);
    cq.enqueue(3);
    cout << cq.front() << endl;
    cout << cq.dequeue() << endl;
    cout << cq.front() << endl;
    cout << cq.size() << endl;


    return 0;
}