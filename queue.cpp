#include<iostream>

using namespace std;

class queue_yamae {
    private:
        int queue[10];
        int m_rear = -1, m_front = -1;

    public:
        bool empty() {
            return m_rear == m_front;
        }

        bool full() {
            return m_rear == 10 - 1;
        }

        void push(int num) {
            if (full()) {
                cout << "queue is full, cannot push anymore!" << endl;
                return;
            }
            m_rear++;
            queue[m_rear] = num;
        }

        int pop() {
            if (empty()) {
                cout << "queue is empty, cannot pop!" << endl;
                return -1;
            }
            return queue[++m_front];
        }
};

int main() {
    queue_yamae q;

    // Add data over max capacity 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);

    cout << q.pop() << endl;

    if (q.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;
    

    return 0;
}