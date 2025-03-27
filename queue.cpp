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

        int pop() {
            if (empty())
                return;
            return queue[++m_front];
        }
};

int main() {
    queue_yamae q;
    q.push(1);
    cout << q.pop() << endl;

    if (q.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;
    

    return 0;
}