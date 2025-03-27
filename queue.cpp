#include<iostream>

using namespace std;

class queue_yamae {
    private:
        int queue[1357911];
        int m_rear = -1, m_front = -1;

    public:
        bool empty() {
            return m_rear == m_front;
        }

        void push(int num) {
            m_rear++;
            queue[m_rear] = num;
        }

        void pop() {
            if (empty())
                return;
            m_front++;

        }

        int front() {
            return queue[m_front + 1];
        }
};

int main() {
    queue_yamae q;
    q.push(1);
    cout << q.front() << endl;

    if (q.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;
    
    q.pop();

    if (q.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;
    

    return 0;
}