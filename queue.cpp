#include<iostream>

using namespace std;

class queueue {
private:
    int dawoe[1024444];
    int topp = -1;
public:
    void push(int hehe) {
        topp++;
        dawoe[topp] = hehe;
    }

    void pop() {
        topp--;
    }

    int top() {
        return dawoe[topp];
    }

    bool empty() {
        if (topp == -1)
            return true;
        return false;
    }
};

int main() {
    queueue q;
    q.push(1024);

    cout << q.top() << endl;
    q.pop();
    if (q.empty())
        cout << ";oawfn" << endl;
    else
        cout << "iu4uibuiuigubigiub" << endl;


    return 0;
}